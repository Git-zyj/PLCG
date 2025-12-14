#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -677025412;
short var_7 = (short)24465;
unsigned int var_9 = 1279313477U;
unsigned int var_14 = 1425662695U;
unsigned int var_16 = 2032161442U;
int var_17 = 1665764419;
int zero = 0;
unsigned short var_19 = (unsigned short)38205;
unsigned short var_20 = (unsigned short)28092;
unsigned short var_21 = (unsigned short)48007;
short var_22 = (short)-9136;
long long int var_23 = -1972857998245395154LL;
int arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -1553665002;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1090852047U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
