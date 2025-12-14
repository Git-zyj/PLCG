#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned int var_2 = 4245166921U;
int var_3 = 1678007614;
long long int var_4 = -8023352995152472758LL;
unsigned int var_7 = 3682099744U;
unsigned char var_12 = (unsigned char)244;
short var_14 = (short)29774;
int zero = 0;
unsigned short var_15 = (unsigned short)2751;
short var_16 = (short)-23747;
signed char var_17 = (signed char)46;
unsigned int var_18 = 4283172618U;
short var_19 = (short)-27585;
_Bool var_20 = (_Bool)1;
short var_21 = (short)13307;
unsigned long long int var_22 = 11264896990583738195ULL;
signed char var_23 = (signed char)98;
_Bool var_24 = (_Bool)1;
int var_25 = -1432660478;
unsigned int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2316931761U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
