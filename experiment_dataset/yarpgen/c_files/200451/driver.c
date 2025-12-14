#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
long long int var_2 = -8886094412740250980LL;
unsigned int var_4 = 550793855U;
signed char var_5 = (signed char)-99;
unsigned char var_6 = (unsigned char)26;
long long int var_7 = -3992988903892657261LL;
signed char var_8 = (signed char)-82;
short var_9 = (short)278;
long long int var_10 = -4133068841998389883LL;
signed char var_12 = (signed char)102;
signed char var_13 = (signed char)20;
int var_14 = -842302093;
short var_15 = (short)-16843;
unsigned char var_16 = (unsigned char)69;
int zero = 0;
signed char var_17 = (signed char)-45;
unsigned char var_18 = (unsigned char)121;
long long int var_19 = 8263375721860511587LL;
short var_20 = (short)-32414;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)15429;
long long int var_23 = 4675001001565499234LL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-115;
short arr_1 [11] ;
short arr_2 [11] ;
_Bool arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)1356;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)10153;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
