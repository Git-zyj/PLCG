#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7113286238694273462ULL;
unsigned char var_2 = (unsigned char)84;
unsigned short var_3 = (unsigned short)28872;
long long int var_4 = -1695647460664593360LL;
unsigned short var_5 = (unsigned short)25304;
unsigned int var_6 = 1653715588U;
int var_10 = 1703503062;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29314;
_Bool var_14 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5639641885580325747LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)41466;
unsigned int var_23 = 1723774810U;
int var_24 = -108829471;
long long int var_25 = -2819444263460141827LL;
unsigned short arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned char arr_5 [12] [12] ;
_Bool arr_2 [21] [21] ;
signed char arr_6 [12] ;
unsigned int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5712;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1642355411;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 278183389U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
