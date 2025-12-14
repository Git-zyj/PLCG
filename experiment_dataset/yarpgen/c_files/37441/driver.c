#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1789771129941300468LL;
short var_1 = (short)10362;
unsigned int var_2 = 1302654373U;
unsigned long long int var_3 = 7204226019150835099ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 1186170864;
int var_6 = 1145334339;
signed char var_7 = (signed char)-124;
signed char var_8 = (signed char)98;
int var_9 = -815358971;
unsigned long long int var_10 = 9935197535787445539ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1848763407U;
unsigned short var_14 = (unsigned short)37334;
_Bool var_15 = (_Bool)1;
int var_16 = -46398172;
int var_17 = 1781286462;
unsigned long long int var_18 = 5749875490055700616ULL;
unsigned int var_19 = 743708635U;
long long int var_20 = -4965620647001851630LL;
signed char var_21 = (signed char)48;
unsigned short arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned char arr_2 [23] ;
short arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned short arr_5 [23] [23] [23] ;
unsigned int arr_7 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_8 [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)50868;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)15656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 17259397144592568491ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)56918;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1144503610U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 222521628U : 3973602718U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3118697822U : 1279864483U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
