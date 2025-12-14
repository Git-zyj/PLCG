#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5026;
short var_6 = (short)809;
short var_7 = (short)-8186;
unsigned short var_19 = (unsigned short)52312;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)27092;
int var_22 = -249716029;
unsigned char var_23 = (unsigned char)130;
int var_24 = -573430165;
unsigned char var_25 = (unsigned char)70;
unsigned short var_26 = (unsigned short)1763;
unsigned short var_27 = (unsigned short)50073;
_Bool var_28 = (_Bool)1;
int var_29 = 388034432;
unsigned long long int arr_8 [25] [25] ;
unsigned long long int arr_10 [25] ;
unsigned long long int arr_12 [25] [25] [25] [25] ;
short arr_19 [25] ;
unsigned long long int arr_20 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 8999615169985294565ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 8714952336578961948ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 14813632071924825204ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-32347 : (short)7385;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 7683291946084499325ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
