#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24113;
unsigned long long int var_2 = 10714146986715255379ULL;
unsigned long long int var_4 = 12548557129389994152ULL;
unsigned char var_5 = (unsigned char)241;
unsigned int var_8 = 3158606651U;
unsigned short var_12 = (unsigned short)5949;
int zero = 0;
signed char var_14 = (signed char)25;
short var_15 = (short)3571;
int var_16 = 931225543;
long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 3058959032155742168LL;
}

void checksum() {
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
