#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)64969;
short var_8 = (short)-13397;
unsigned long long int var_17 = 14075496987477124561ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
unsigned int var_20 = 4013636282U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
