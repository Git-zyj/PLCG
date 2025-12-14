#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30933;
signed char var_9 = (signed char)33;
int zero = 0;
long long int var_11 = -1015069241335576316LL;
int var_12 = -2090403864;
short var_13 = (short)1175;
unsigned long long int var_14 = 9439943323925458571ULL;
int var_15 = 215100324;
int var_16 = 410133603;
unsigned short var_17 = (unsigned short)60140;
unsigned char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
