#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20778;
short var_8 = (short)23889;
unsigned short var_14 = (unsigned short)50260;
int zero = 0;
unsigned long long int var_16 = 2642037496702609472ULL;
short var_17 = (short)-22783;
unsigned char var_18 = (unsigned char)20;
unsigned int var_19 = 4203653485U;
int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 172091577;
}

void checksum() {
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
