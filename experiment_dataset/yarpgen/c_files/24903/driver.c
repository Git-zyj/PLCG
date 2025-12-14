#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 7423283261241457332ULL;
int var_3 = 209084647;
unsigned short var_4 = (unsigned short)46934;
unsigned long long int var_5 = 14079020848061106625ULL;
unsigned int var_6 = 2707564139U;
unsigned int var_7 = 20637537U;
unsigned short var_8 = (unsigned short)17768;
unsigned long long int var_9 = 10048385071295195894ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)57769;
unsigned long long int var_11 = 10532916039504575815ULL;
unsigned short var_12 = (unsigned short)21395;
unsigned long long int var_13 = 12345969358416311814ULL;
_Bool arr_3 [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)20624;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
