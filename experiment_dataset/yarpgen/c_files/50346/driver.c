#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1515400638U;
unsigned long long int var_1 = 13936410028731635681ULL;
short var_5 = (short)-23496;
unsigned char var_8 = (unsigned char)41;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
unsigned int var_11 = 500527139U;
unsigned int var_12 = 1419724540U;
unsigned int var_13 = 1177433174U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
