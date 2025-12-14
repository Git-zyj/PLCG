#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1807816883;
unsigned long long int var_2 = 328257025919458077ULL;
unsigned short var_5 = (unsigned short)22723;
int var_6 = 1806288943;
unsigned int var_8 = 1020625605U;
unsigned char var_11 = (unsigned char)212;
signed char var_13 = (signed char)-119;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)59225;
unsigned long long int var_17 = 1620765784273067135ULL;
int zero = 0;
short var_19 = (short)-2696;
unsigned short var_20 = (unsigned short)22050;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-11991;
short var_23 = (short)12291;
unsigned char arr_0 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)137;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
