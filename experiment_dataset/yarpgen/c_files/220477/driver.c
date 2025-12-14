#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6248534896770531463ULL;
unsigned char var_13 = (unsigned char)188;
short var_16 = (short)-9202;
int zero = 0;
unsigned short var_17 = (unsigned short)60522;
unsigned short var_18 = (unsigned short)9178;
unsigned char var_19 = (unsigned char)175;
unsigned int var_20 = 469264842U;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-30179 : (short)11818;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
