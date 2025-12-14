#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20104;
signed char var_4 = (signed char)61;
unsigned long long int var_11 = 13549319056533467107ULL;
short var_12 = (short)-24758;
unsigned int var_15 = 4157652456U;
unsigned char var_16 = (unsigned char)160;
int var_17 = -22742739;
unsigned int var_18 = 3470393922U;
int zero = 0;
unsigned short var_20 = (unsigned short)52553;
unsigned long long int var_21 = 5170579944785997993ULL;
short var_22 = (short)30421;
unsigned short var_23 = (unsigned short)43215;
unsigned short arr_1 [16] ;
long long int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)56522;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 6341419743140202135LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
