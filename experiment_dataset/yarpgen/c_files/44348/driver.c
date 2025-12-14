#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2174910239U;
int var_13 = -209261361;
signed char var_18 = (signed char)120;
int zero = 0;
signed char var_19 = (signed char)48;
unsigned char var_20 = (unsigned char)27;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4546536943556443200LL;
long long int var_24 = 1443611420365910607LL;
long long int var_25 = 7226121508634440133LL;
unsigned char var_26 = (unsigned char)231;
signed char var_27 = (signed char)-18;
signed char var_28 = (signed char)24;
_Bool arr_0 [16] ;
signed char arr_1 [16] ;
unsigned char arr_2 [16] ;
int arr_6 [16] [16] [16] [16] ;
unsigned char arr_29 [16] [16] [16] ;
unsigned int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)72 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1556943748;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1526579716U : 4045486629U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
