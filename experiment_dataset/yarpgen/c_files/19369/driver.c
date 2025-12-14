#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 61955018;
unsigned short var_1 = (unsigned short)21042;
int var_3 = 253543868;
unsigned char var_4 = (unsigned char)47;
signed char var_5 = (signed char)-69;
short var_7 = (short)8749;
int var_8 = -355307080;
unsigned short var_11 = (unsigned short)56779;
int zero = 0;
int var_12 = 923172925;
unsigned long long int var_13 = 15788571075059486185ULL;
unsigned long long int var_14 = 14424973747374129000ULL;
unsigned short var_15 = (unsigned short)62460;
unsigned char var_16 = (unsigned char)90;
int var_17 = 831806882;
unsigned long long int var_18 = 1052256779742730657ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)194;
unsigned int var_21 = 317141081U;
unsigned char var_22 = (unsigned char)164;
int arr_0 [19] [19] ;
unsigned int arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
short arr_3 [19] ;
unsigned char arr_9 [19] ;
long long int arr_12 [19] ;
unsigned long long int arr_7 [19] [19] ;
int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 29506949;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4039169357U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-10375;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 6057316538860865008LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 6791779253090472759ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -1441854932;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
