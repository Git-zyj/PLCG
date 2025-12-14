#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -289603004;
unsigned int var_4 = 2275366714U;
unsigned char var_8 = (unsigned char)214;
unsigned short var_14 = (unsigned short)45114;
int zero = 0;
unsigned int var_17 = 3398643181U;
long long int var_18 = -539433382663747865LL;
unsigned char var_19 = (unsigned char)16;
int var_20 = 1597300201;
unsigned short var_21 = (unsigned short)18095;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)39;
int arr_1 [14] [14] ;
unsigned short arr_3 [14] [14] ;
unsigned char arr_6 [14] ;
short arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1886459589 : 1633297942;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23047 : (unsigned short)9349;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-18413 : (short)-1695;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
