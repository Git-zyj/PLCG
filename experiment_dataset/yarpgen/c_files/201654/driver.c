#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-38;
unsigned int var_8 = 1775740161U;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_17 = -3727295890203844131LL;
unsigned long long int var_18 = 15048281460612058670ULL;
short var_19 = (short)-11816;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
