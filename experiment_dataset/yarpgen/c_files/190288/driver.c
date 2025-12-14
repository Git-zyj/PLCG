#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2528562376U;
unsigned long long int var_8 = 3638007649500755631ULL;
long long int var_9 = -620417307435250046LL;
signed char var_11 = (signed char)30;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1995183085;
signed char var_14 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
