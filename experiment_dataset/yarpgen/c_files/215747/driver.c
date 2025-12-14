#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15290;
unsigned char var_1 = (unsigned char)70;
unsigned char var_2 = (unsigned char)75;
unsigned short var_4 = (unsigned short)26287;
unsigned long long int var_7 = 1432130139627544032ULL;
signed char var_8 = (signed char)-125;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-120;
unsigned char var_12 = (unsigned char)171;
unsigned long long int var_14 = 14411731907027384462ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)197;
short var_16 = (short)-4359;
signed char var_17 = (signed char)-106;
_Bool var_18 = (_Bool)1;
int var_19 = 449862372;
unsigned short arr_3 [20] ;
signed char arr_4 [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)25781;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11479861793168123839ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
