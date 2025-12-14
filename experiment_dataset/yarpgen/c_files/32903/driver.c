#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1974953271441942907ULL;
unsigned long long int var_4 = 5668912929767617394ULL;
signed char var_5 = (signed char)-104;
unsigned int var_6 = 324448044U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3304653466713234384LL;
unsigned int var_9 = 3742980499U;
unsigned int var_10 = 3005328343U;
unsigned int var_12 = 4199208169U;
unsigned long long int var_14 = 6487395628728773527ULL;
int var_17 = -1825233720;
int zero = 0;
unsigned char var_19 = (unsigned char)111;
int var_20 = 569728630;
unsigned int var_21 = 3045310681U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 4554928578787595683ULL;
long long int var_24 = -1790645629859034889LL;
unsigned long long int var_25 = 673174123417302315ULL;
long long int var_26 = -1435933969839547188LL;
_Bool var_27 = (_Bool)1;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
short arr_4 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] [13] ;
unsigned int arr_9 [13] [13] [13] [13] ;
unsigned int arr_10 [13] ;
unsigned int arr_14 [13] [13] [13] [13] [13] ;
_Bool arr_15 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4775 : (short)-20563;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4298412520853154454ULL : 8528529440040361571ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1133218549U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1864952598U : 1107792091U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 14628434U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
