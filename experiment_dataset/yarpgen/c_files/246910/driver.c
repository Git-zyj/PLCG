#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
short var_1 = (short)30380;
unsigned int var_2 = 444305652U;
unsigned char var_3 = (unsigned char)172;
unsigned int var_4 = 2039359263U;
short var_5 = (short)-30151;
signed char var_6 = (signed char)-79;
signed char var_7 = (signed char)-104;
unsigned int var_8 = 3502316975U;
signed char var_9 = (signed char)50;
unsigned char var_10 = (unsigned char)251;
unsigned char var_11 = (unsigned char)86;
unsigned short var_14 = (unsigned short)21988;
unsigned short var_15 = (unsigned short)21631;
int zero = 0;
short var_17 = (short)25078;
short var_18 = (short)-29256;
unsigned int var_19 = 172557752U;
short var_20 = (short)31316;
short var_21 = (short)18122;
unsigned int var_22 = 4237283458U;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-7670;
signed char var_25 = (signed char)-121;
long long int var_26 = 5657262754710858948LL;
signed char var_27 = (signed char)72;
unsigned int var_28 = 2250071235U;
short arr_0 [12] ;
unsigned int arr_5 [16] ;
long long int arr_6 [20] [20] ;
unsigned char arr_7 [20] ;
unsigned int arr_8 [20] ;
unsigned char arr_12 [12] [12] [12] ;
int arr_13 [12] [12] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)7283;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2541884919U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 8120523441005757826LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 44790885U : 2639217361U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = -189070541;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3141873661U : 3401742850U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
