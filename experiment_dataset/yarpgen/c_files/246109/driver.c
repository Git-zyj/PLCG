#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1939462802U;
unsigned char var_4 = (unsigned char)4;
unsigned char var_6 = (unsigned char)129;
unsigned short var_7 = (unsigned short)21076;
unsigned short var_9 = (unsigned short)5089;
unsigned short var_11 = (unsigned short)9860;
int zero = 0;
short var_15 = (short)-1233;
unsigned short var_16 = (unsigned short)22292;
short var_17 = (short)7564;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = -3613825604983790277LL;
unsigned short arr_0 [10] ;
short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)48081;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-13820;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
