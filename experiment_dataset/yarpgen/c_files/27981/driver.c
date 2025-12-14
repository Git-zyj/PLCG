#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
int var_1 = -1655302246;
unsigned short var_2 = (unsigned short)22994;
unsigned long long int var_3 = 8094009262047509175ULL;
signed char var_5 = (signed char)-113;
long long int var_7 = -5629035804114635819LL;
unsigned int var_8 = 2039219810U;
long long int var_9 = 8340649583874214626LL;
long long int var_10 = -2017883638173193927LL;
unsigned long long int var_11 = 4666778231373992577ULL;
int zero = 0;
signed char var_12 = (signed char)70;
unsigned short var_13 = (unsigned short)42397;
signed char var_14 = (signed char)119;
signed char var_15 = (signed char)-41;
unsigned long long int var_16 = 9781097231447320679ULL;
unsigned char var_17 = (unsigned char)163;
short var_18 = (short)-6952;
_Bool var_19 = (_Bool)0;
long long int var_20 = 4216717623166286977LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 726615414297239074LL;
short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)20003;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
