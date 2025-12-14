#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1564390076;
int var_3 = -1513412634;
unsigned char var_4 = (unsigned char)189;
unsigned char var_5 = (unsigned char)86;
short var_9 = (short)-11758;
int var_11 = -1478055099;
int zero = 0;
short var_12 = (short)-25304;
short var_13 = (short)-22751;
unsigned int var_14 = 3363188205U;
int var_15 = -1555710522;
unsigned char var_16 = (unsigned char)241;
signed char arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-87;
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
