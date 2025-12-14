#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5501786491248263055ULL;
unsigned char var_3 = (unsigned char)38;
signed char var_8 = (signed char)-61;
unsigned char var_15 = (unsigned char)70;
int zero = 0;
unsigned long long int var_18 = 321473379270060566ULL;
unsigned short var_19 = (unsigned short)44783;
void init() {
}

void checksum() {
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
