#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2201536827U;
unsigned short var_9 = (unsigned short)33151;
unsigned short var_14 = (unsigned short)21317;
long long int var_16 = 9166812675814262513LL;
int var_17 = -265801681;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3430335606U;
int var_20 = 257570581;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 14762368713256700604ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
