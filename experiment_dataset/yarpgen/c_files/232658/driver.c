#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53648;
unsigned short var_1 = (unsigned short)46974;
unsigned short var_4 = (unsigned short)61037;
unsigned short var_7 = (unsigned short)2128;
unsigned short var_8 = (unsigned short)9359;
unsigned short var_9 = (unsigned short)53647;
int zero = 0;
unsigned short var_11 = (unsigned short)24600;
unsigned short var_12 = (unsigned short)11556;
unsigned short var_13 = (unsigned short)9662;
unsigned short var_14 = (unsigned short)34589;
unsigned short var_15 = (unsigned short)48549;
unsigned short var_16 = (unsigned short)12715;
unsigned short var_17 = (unsigned short)62572;
unsigned short arr_1 [14] ;
unsigned short arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)22341;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)25954;
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
