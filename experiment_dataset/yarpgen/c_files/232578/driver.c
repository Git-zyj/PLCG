#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63962;
unsigned short var_1 = (unsigned short)8521;
unsigned short var_2 = (unsigned short)47498;
long long int var_3 = 7030590492777495705LL;
long long int var_4 = -1364940355893087799LL;
unsigned short var_5 = (unsigned short)46791;
long long int var_6 = 3290949250147061776LL;
int var_7 = -362200683;
unsigned long long int var_8 = 15487502713326036164ULL;
long long int var_10 = 4462213367043132970LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1656891693541737894LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 991203147;
unsigned int var_15 = 2087335317U;
unsigned short var_16 = (unsigned short)62454;
long long int var_17 = -9004052566684933787LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
