#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -749996448;
int var_2 = 1432123190;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-61;
unsigned char var_11 = (unsigned char)166;
signed char var_12 = (signed char)44;
long long int var_13 = 8233682087319828779LL;
signed char var_17 = (signed char)-11;
int zero = 0;
long long int var_18 = 5389068409652083345LL;
unsigned char var_19 = (unsigned char)16;
unsigned char var_20 = (unsigned char)70;
unsigned char var_21 = (unsigned char)203;
unsigned int var_22 = 502718312U;
short arr_5 [14] [14] [14] ;
int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)32649;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 1028250386 : -1978151230;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
