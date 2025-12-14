#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)75;
unsigned long long int var_5 = 11258808812278787243ULL;
long long int var_6 = 4630655896827466705LL;
int var_8 = 1714932576;
int var_9 = -1786730057;
unsigned int var_10 = 3074160412U;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
unsigned char var_15 = (unsigned char)202;
unsigned int var_16 = 2596495703U;
unsigned char var_17 = (unsigned char)56;
unsigned int var_18 = 1163044504U;
long long int arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 67279276051872885LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)24227;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
