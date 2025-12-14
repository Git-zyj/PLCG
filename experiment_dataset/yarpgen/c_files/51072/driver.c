#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)118;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6136645878342597174LL;
unsigned long long int var_6 = 12149088676499721500ULL;
long long int var_7 = -8785245371018336938LL;
int var_9 = -1674707131;
unsigned int var_12 = 113182339U;
unsigned int var_13 = 1112685172U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-28343;
int zero = 0;
unsigned char var_19 = (unsigned char)99;
long long int var_20 = 1449783335207620003LL;
unsigned long long int var_21 = 12124447033706224980ULL;
unsigned short var_22 = (unsigned short)33602;
unsigned char var_23 = (unsigned char)15;
unsigned char arr_0 [13] [13] ;
int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -1038853680;
}

void checksum() {
    hash(&seed, var_19);
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
