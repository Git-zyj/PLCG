#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32898;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)23;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)130;
int var_9 = -1673485011;
int var_11 = 13983299;
short var_12 = (short)-4622;
int var_13 = 1239249712;
int zero = 0;
int var_14 = -2113060718;
int var_15 = -1431364226;
long long int var_16 = 2964414681668675379LL;
_Bool var_17 = (_Bool)0;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
signed char arr_2 [19] [19] ;
unsigned short arr_3 [19] [19] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 901463428U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)32555;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)39169;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
