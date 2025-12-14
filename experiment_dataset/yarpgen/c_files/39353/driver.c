#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19900;
long long int var_2 = -8441749801089485978LL;
short var_5 = (short)16410;
signed char var_7 = (signed char)-121;
short var_8 = (short)-32318;
unsigned int var_10 = 3565711330U;
int zero = 0;
long long int var_18 = 3880301833232397586LL;
unsigned int var_19 = 729548922U;
unsigned char var_20 = (unsigned char)137;
long long int var_21 = -1612389758348749361LL;
unsigned short var_22 = (unsigned short)34439;
unsigned long long int var_23 = 10319244429759246440ULL;
long long int arr_1 [11] [11] ;
signed char arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
long long int arr_4 [11] ;
unsigned char arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4684264796500039870LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3739821484U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 4615464160122606085LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)160;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
