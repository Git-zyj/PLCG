#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned int var_3 = 3027310375U;
unsigned short var_4 = (unsigned short)11156;
short var_5 = (short)-11170;
short var_8 = (short)-28000;
int zero = 0;
unsigned long long int var_11 = 8187906342362533466ULL;
unsigned int var_12 = 954622768U;
short var_13 = (short)2692;
void init() {
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
