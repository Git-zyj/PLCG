#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46829;
unsigned int var_2 = 4099564338U;
signed char var_3 = (signed char)-18;
long long int var_4 = 7867144641812599419LL;
unsigned short var_6 = (unsigned short)12980;
int var_10 = -1264117801;
unsigned char var_12 = (unsigned char)247;
int var_13 = 1625831853;
signed char var_17 = (signed char)54;
int zero = 0;
unsigned long long int var_18 = 8157012223001290846ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-8;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)82;
int var_23 = -1867425574;
unsigned int arr_6 [10] ;
unsigned long long int arr_16 [14] [14] [14] ;
unsigned int arr_7 [10] ;
_Bool arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3106713445U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 4974240590284349434ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 2999821068U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
