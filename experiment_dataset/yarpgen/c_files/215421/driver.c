#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)171;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned char var_14 = (unsigned char)98;
long long int var_15 = 2151796976211646285LL;
int var_16 = 1164412292;
unsigned long long int var_17 = 13689050475710533384ULL;
unsigned char var_18 = (unsigned char)202;
unsigned int var_19 = 2447322338U;
unsigned char var_20 = (unsigned char)159;
unsigned char var_21 = (unsigned char)1;
short var_22 = (short)-26072;
short var_23 = (short)-2945;
unsigned char var_24 = (unsigned char)216;
short var_25 = (short)-10640;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 4686108725198789930ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
