#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1531235029509494035LL;
unsigned long long int var_2 = 5172962542968490943ULL;
unsigned long long int var_8 = 75749907446048647ULL;
unsigned short var_9 = (unsigned short)8674;
long long int var_10 = -2071169678926160735LL;
short var_13 = (short)-27999;
int zero = 0;
unsigned long long int var_15 = 17425649069149637734ULL;
unsigned long long int var_16 = 14694055851398629162ULL;
short var_17 = (short)-3262;
short var_18 = (short)28225;
unsigned long long int var_19 = 293744126782557785ULL;
unsigned int var_20 = 143211795U;
unsigned long long int var_21 = 2537961563267110001ULL;
unsigned long long int var_22 = 16622355005282893252ULL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -6102217574064686740LL;
unsigned long long int var_25 = 2643020980387929919ULL;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned int arr_7 [24] [24] [24] [24] ;
short arr_8 [24] [24] ;
short arr_9 [24] [24] [24] [24] [24] ;
short arr_11 [24] [24] ;
unsigned long long int arr_15 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 14039610611276472058ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4118317774U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (short)26863;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-1993;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (short)18602;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3206686601163966491ULL;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
