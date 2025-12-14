#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15286056984155573554ULL;
signed char var_1 = (signed char)92;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)14666;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)1274;
unsigned short var_10 = (unsigned short)4897;
unsigned long long int var_11 = 7257195412066953996ULL;
short var_12 = (short)11318;
unsigned short var_13 = (unsigned short)1884;
short var_14 = (short)31589;
unsigned short var_15 = (unsigned short)37602;
unsigned long long int var_18 = 8108708156000493121ULL;
int zero = 0;
unsigned long long int var_20 = 18277106513579950271ULL;
unsigned long long int var_21 = 9973917095285702634ULL;
unsigned long long int var_22 = 13734414571615063697ULL;
short var_23 = (short)10195;
signed char var_24 = (signed char)-15;
int arr_0 [21] ;
short arr_3 [21] ;
unsigned long long int arr_7 [16] ;
short arr_4 [21] [21] ;
unsigned int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -619508741;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-3104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 17951738314211845149ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-9889;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3350278771U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
