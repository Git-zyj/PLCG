#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)130;
int var_7 = 1043616822;
unsigned short var_8 = (unsigned short)11069;
unsigned long long int var_9 = 15194589549440235923ULL;
unsigned short var_10 = (unsigned short)30087;
long long int var_12 = 2933876668597361896LL;
int zero = 0;
long long int var_13 = 8903917590072912331LL;
unsigned char var_14 = (unsigned char)73;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5661695927621303576LL;
unsigned char var_17 = (unsigned char)106;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)48168;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
