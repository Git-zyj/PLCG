#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4100536188U;
unsigned long long int var_14 = 6286389313820037377ULL;
short var_15 = (short)26711;
long long int var_18 = -5052250011050306988LL;
int zero = 0;
short var_20 = (short)19162;
unsigned long long int var_21 = 10027013214035203364ULL;
long long int var_22 = 839810509296382438LL;
long long int var_23 = 7195074482879808985LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
