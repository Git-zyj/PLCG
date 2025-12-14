#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14976;
long long int var_4 = 8552161444771614638LL;
int var_9 = 1122128991;
long long int var_11 = -7242524945304958905LL;
int zero = 0;
long long int var_12 = 4399365099376086046LL;
unsigned short var_13 = (unsigned short)6172;
short var_14 = (short)-21575;
long long int var_15 = 1134798196603144246LL;
unsigned char var_16 = (unsigned char)194;
long long int var_17 = -6797447370528129646LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8699846384994718923ULL;
long long int var_20 = 9140211282391609397LL;
int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
int arr_2 [20] [20] ;
unsigned char arr_6 [23] ;
long long int arr_7 [23] ;
unsigned int arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -1255276486;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -1190863121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 4237944729165744686LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2316022736U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
