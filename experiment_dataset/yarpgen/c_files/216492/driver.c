#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12814;
unsigned long long int var_7 = 17412538293262391583ULL;
unsigned short var_8 = (unsigned short)47866;
int zero = 0;
unsigned int var_11 = 674510442U;
unsigned char var_12 = (unsigned char)44;
unsigned int var_13 = 552490633U;
int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 455389068;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
