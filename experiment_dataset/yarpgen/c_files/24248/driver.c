#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-37;
unsigned int var_9 = 3957777590U;
long long int var_16 = -6896212520922486500LL;
long long int var_19 = -1460848438499457781LL;
int zero = 0;
unsigned int var_20 = 1653883704U;
unsigned int var_21 = 3503795626U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
