#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9467;
unsigned char var_5 = (unsigned char)136;
unsigned char var_8 = (unsigned char)182;
unsigned char var_10 = (unsigned char)226;
unsigned int var_11 = 1719787052U;
unsigned int var_12 = 820148447U;
int zero = 0;
unsigned long long int var_14 = 10815186213211013249ULL;
unsigned long long int var_15 = 4396083284998202976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
