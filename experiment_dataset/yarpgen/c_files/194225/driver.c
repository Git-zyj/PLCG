#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1869249222;
signed char var_1 = (signed char)-80;
int var_2 = 316586001;
long long int var_8 = -438039553333277483LL;
unsigned int var_10 = 1251579644U;
int var_12 = 519594481;
signed char var_13 = (signed char)-12;
int var_14 = 408683748;
int zero = 0;
unsigned short var_16 = (unsigned short)2234;
signed char var_17 = (signed char)112;
signed char var_18 = (signed char)110;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)65482;
long long int var_21 = 1528435918595904832LL;
unsigned short var_22 = (unsigned short)40604;
signed char arr_1 [18] ;
unsigned int arr_5 [18] [18] [18] ;
signed char arr_7 [18] [18] [18] ;
unsigned char arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 210887421U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
