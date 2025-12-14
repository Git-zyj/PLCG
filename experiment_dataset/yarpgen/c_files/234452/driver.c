#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned int var_1 = 3521700510U;
unsigned long long int var_3 = 6070025358285012652ULL;
unsigned long long int var_4 = 9158753499869245923ULL;
unsigned int var_6 = 1633985716U;
_Bool var_8 = (_Bool)1;
long long int var_14 = 3609719493484591874LL;
unsigned char var_15 = (unsigned char)164;
unsigned int var_18 = 2581589081U;
short var_19 = (short)20030;
int zero = 0;
unsigned int var_20 = 3263859477U;
unsigned int var_21 = 2110413508U;
unsigned short var_22 = (unsigned short)52060;
unsigned long long int var_23 = 10159113769557767904ULL;
unsigned short var_24 = (unsigned short)7696;
unsigned short arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
short arr_2 [17] [17] ;
unsigned char arr_4 [16] ;
short arr_5 [16] ;
unsigned int arr_3 [17] [17] ;
unsigned long long int arr_6 [16] ;
int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)59754;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2097718009U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-28007;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-26378;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 82165288U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 9684254544194478437ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -1729926689;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
