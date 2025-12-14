#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9472398879754625227ULL;
short var_1 = (short)30552;
int var_2 = 119076976;
unsigned long long int var_4 = 10638804124037140361ULL;
short var_5 = (short)11283;
short var_6 = (short)-8279;
short var_7 = (short)-24267;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
short var_12 = (short)14407;
unsigned long long int var_13 = 10544552796925286378ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13153945586080711273ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-72;
int var_18 = -1505633803;
_Bool var_19 = (_Bool)0;
long long int var_20 = 4359362729645249134LL;
unsigned int arr_0 [13] ;
int arr_13 [24] [24] [24] [24] ;
unsigned long long int arr_16 [24] [24] [24] ;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2964873275U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1418582904;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 12375578554066678806ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5471188511296321655ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
