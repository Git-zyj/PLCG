#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12639;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_9 = -5300234461954448209LL;
unsigned char var_11 = (unsigned char)20;
int var_14 = -829374437;
int zero = 0;
unsigned long long int var_17 = 9630484547448215179ULL;
unsigned char var_18 = (unsigned char)218;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 480972008U;
long long int var_21 = -83939373325186102LL;
long long int var_22 = 4379069402245070836LL;
signed char var_23 = (signed char)-28;
signed char var_24 = (signed char)-66;
unsigned short arr_0 [24] ;
unsigned int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
long long int arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] [24] ;
short arr_6 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)700;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2884815709U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 15512300981694709277ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 2593671740878694096LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)44 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)5233;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
