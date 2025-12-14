#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)11189;
short var_2 = (short)-5482;
signed char var_3 = (signed char)103;
signed char var_4 = (signed char)43;
int var_6 = 168546250;
int var_7 = 818486635;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)77;
signed char var_12 = (signed char)-31;
short var_13 = (short)-4612;
int zero = 0;
unsigned int var_15 = 190180730U;
unsigned int var_16 = 377901820U;
unsigned char var_17 = (unsigned char)46;
long long int var_18 = -8066941813434787873LL;
long long int var_19 = -1015837406302762453LL;
int var_20 = 268644972;
int var_21 = -1928175619;
_Bool var_22 = (_Bool)1;
short var_23 = (short)7277;
unsigned int var_24 = 514458328U;
unsigned long long int arr_2 [13] ;
int arr_4 [13] [13] ;
_Bool arr_5 [13] ;
unsigned int arr_6 [13] ;
signed char arr_8 [18] ;
unsigned char arr_12 [18] ;
unsigned short arr_13 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 13588300679899699480ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 391823506;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1825607053U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43269;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
