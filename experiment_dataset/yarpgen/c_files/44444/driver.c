#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3703653531U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4008204682U;
unsigned short var_3 = (unsigned short)22783;
unsigned char var_4 = (unsigned char)180;
short var_5 = (short)-30774;
int var_7 = -2131993787;
unsigned int var_10 = 3347645383U;
unsigned int var_11 = 3352656380U;
unsigned long long int var_13 = 10605403094207179180ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 3376607256U;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned int var_19 = 2699262250U;
int var_20 = 920784818;
unsigned long long int var_21 = 9681415004598808855ULL;
unsigned int var_22 = 1369382518U;
unsigned int var_23 = 3783911483U;
short var_24 = (short)14219;
_Bool var_25 = (_Bool)1;
long long int arr_0 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
int arr_5 [12] [12] [12] ;
int arr_7 [12] ;
unsigned int arr_10 [12] [12] [12] [12] [12] [12] ;
signed char arr_14 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5736492233998311753LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6153542972420286478ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 154426711;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1591019068;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2627464046U : 1194534774U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)121 : (signed char)-6;
}

void checksum() {
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
