#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18213190557975007597ULL;
unsigned long long int var_6 = 4709551533060192724ULL;
int var_11 = -741321129;
int zero = 0;
unsigned int var_12 = 2815778230U;
unsigned int var_13 = 714681360U;
unsigned long long int var_14 = 10098053662398762169ULL;
unsigned short var_15 = (unsigned short)48021;
unsigned short var_16 = (unsigned short)62181;
_Bool arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3483368210U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-13087;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
