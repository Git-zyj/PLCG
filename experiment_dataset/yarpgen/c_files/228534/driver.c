#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -338403426;
unsigned long long int var_5 = 8306069412216051434ULL;
unsigned char var_6 = (unsigned char)97;
unsigned char var_7 = (unsigned char)33;
short var_11 = (short)-1417;
int zero = 0;
unsigned char var_14 = (unsigned char)50;
short var_15 = (short)25812;
unsigned short var_16 = (unsigned short)48132;
short var_17 = (short)-28564;
_Bool var_18 = (_Bool)1;
unsigned char arr_0 [14] ;
_Bool arr_1 [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)70;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
