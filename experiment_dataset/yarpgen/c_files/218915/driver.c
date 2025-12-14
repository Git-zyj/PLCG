#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
short var_1 = (short)-453;
unsigned long long int var_2 = 3182202071287124027ULL;
long long int var_4 = -8158494947054598313LL;
unsigned int var_5 = 2044410185U;
unsigned char var_9 = (unsigned char)203;
unsigned char var_11 = (unsigned char)17;
short var_12 = (short)5176;
unsigned int var_13 = 1600056771U;
unsigned long long int var_15 = 16046287704835471799ULL;
int zero = 0;
unsigned long long int var_16 = 3777341125394618532ULL;
unsigned long long int var_17 = 8434645501393612446ULL;
unsigned short var_18 = (unsigned short)62655;
short var_19 = (short)18745;
long long int var_20 = 4832358595536008657LL;
unsigned int var_21 = 4267811791U;
long long int var_22 = -6064103834929064821LL;
unsigned char arr_0 [19] ;
signed char arr_2 [19] [19] ;
unsigned int arr_4 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2303201539U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
