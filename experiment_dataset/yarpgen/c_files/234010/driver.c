#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned short var_2 = (unsigned short)25946;
unsigned long long int var_4 = 18365811795075958715ULL;
unsigned long long int var_7 = 9009814705194683782ULL;
unsigned short var_8 = (unsigned short)47453;
unsigned short var_9 = (unsigned short)59236;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
int var_13 = -1024338552;
unsigned char var_14 = (unsigned char)163;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)61;
unsigned short arr_0 [19] ;
long long int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)24102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4683971292140385085LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 8771023240137804444ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
