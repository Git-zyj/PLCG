#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1983961190U;
unsigned long long int var_2 = 9678989415935367875ULL;
unsigned char var_5 = (unsigned char)75;
int var_9 = -1718584988;
signed char var_13 = (signed char)47;
int zero = 0;
short var_14 = (short)-21664;
unsigned int var_15 = 2659194154U;
short var_16 = (short)-17024;
unsigned char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)185;
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
