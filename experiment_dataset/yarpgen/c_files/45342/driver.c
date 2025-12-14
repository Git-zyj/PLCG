#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1215842911770226223ULL;
unsigned short var_11 = (unsigned short)22656;
short var_13 = (short)-2601;
short var_16 = (short)18492;
unsigned int var_18 = 1150737871U;
int zero = 0;
long long int var_19 = 2073535001639597983LL;
unsigned int var_20 = 2041049364U;
unsigned int var_21 = 2243908760U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
