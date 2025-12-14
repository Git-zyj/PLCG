#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
long long int var_1 = -9143156009161978617LL;
short var_4 = (short)9546;
unsigned int var_5 = 1595868290U;
unsigned long long int var_6 = 707836075703670220ULL;
int var_7 = -798299250;
short var_8 = (short)24659;
unsigned char var_9 = (unsigned char)8;
unsigned short var_10 = (unsigned short)19326;
signed char var_11 = (signed char)87;
unsigned int var_13 = 1431739167U;
int var_14 = -376862918;
int zero = 0;
long long int var_17 = -3010244280109473676LL;
unsigned int var_18 = 1164096707U;
signed char var_19 = (signed char)-104;
unsigned char var_20 = (unsigned char)209;
signed char var_21 = (signed char)-74;
short var_22 = (short)-24747;
unsigned long long int var_23 = 619897695042272686ULL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-93;
int var_26 = -1813285515;
unsigned int var_27 = 4225542571U;
short var_28 = (short)16978;
signed char var_29 = (signed char)-34;
_Bool var_30 = (_Bool)0;
unsigned char arr_12 [11] ;
short arr_17 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)38 : (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-6148 : (short)9116;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
