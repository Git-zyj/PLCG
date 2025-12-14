#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)16559;
unsigned char var_19 = (unsigned char)192;
unsigned int var_20 = 1449289702U;
int var_21 = 1305358905;
signed char var_22 = (signed char)-50;
unsigned char var_23 = (unsigned char)127;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1852923143U;
unsigned long long int var_26 = 18144614349771424530ULL;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
unsigned char arr_4 [14] ;
int arr_10 [23] ;
long long int arr_11 [23] [23] [23] [23] ;
unsigned int arr_12 [23] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 609493737244050451ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 145155483;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1095260730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -5472543366426764341LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1382405036U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
