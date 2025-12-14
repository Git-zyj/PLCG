#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4506030368150647806ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6910042150909080049ULL;
long long int var_8 = 6690686743680735174LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7382460551449755369LL;
int zero = 0;
unsigned long long int var_13 = 1429322619806051101ULL;
short var_14 = (short)27933;
signed char var_15 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
