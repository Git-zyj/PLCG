#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51078;
unsigned char var_2 = (unsigned char)185;
unsigned long long int var_3 = 11265835887916201023ULL;
unsigned short var_7 = (unsigned short)13340;
int zero = 0;
unsigned short var_15 = (unsigned short)6933;
unsigned char var_16 = (unsigned char)64;
short var_17 = (short)935;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
