#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
long long int var_1 = -1644075468284360011LL;
long long int var_2 = -4628633530303824783LL;
long long int var_8 = 4191274885345102782LL;
int zero = 0;
unsigned int var_12 = 3324330588U;
unsigned long long int var_13 = 6110296618088535906ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
