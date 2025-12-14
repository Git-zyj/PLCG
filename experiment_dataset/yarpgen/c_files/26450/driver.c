#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55643;
signed char var_3 = (signed char)25;
unsigned short var_4 = (unsigned short)37206;
unsigned char var_13 = (unsigned char)48;
unsigned short var_18 = (unsigned short)24801;
signed char var_19 = (signed char)62;
int zero = 0;
signed char var_20 = (signed char)-88;
unsigned short var_21 = (unsigned short)50569;
unsigned int var_22 = 1585602805U;
long long int var_23 = -6201450558746002865LL;
unsigned int var_24 = 3330481376U;
unsigned short var_25 = (unsigned short)21972;
long long int var_26 = 9214886735984105209LL;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)38781;
unsigned short var_29 = (unsigned short)43782;
unsigned char var_30 = (unsigned char)139;
short var_31 = (short)998;
short arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned int arr_5 [16] ;
unsigned char arr_6 [16] ;
unsigned short arr_7 [16] ;
unsigned char arr_8 [16] ;
signed char arr_9 [19] ;
long long int arr_10 [19] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24998;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 17496670504477636098ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 822364232U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)7283;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 5454392355215400825LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)35260;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
