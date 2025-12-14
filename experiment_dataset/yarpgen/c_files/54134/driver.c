#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 610587191;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)123;
int var_7 = 424950096;
unsigned long long int var_8 = 12773794123181019413ULL;
unsigned int var_10 = 49015977U;
long long int var_11 = 4358512731707682489LL;
unsigned long long int var_12 = 18279861413534350644ULL;
long long int var_13 = -5581883845456000911LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 1878551977U;
int zero = 0;
unsigned short var_17 = (unsigned short)42869;
_Bool var_18 = (_Bool)1;
short var_19 = (short)23205;
int var_20 = -258889782;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
