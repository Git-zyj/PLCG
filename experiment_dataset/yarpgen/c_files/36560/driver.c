#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16266;
unsigned char var_3 = (unsigned char)37;
short var_7 = (short)-2903;
int zero = 0;
unsigned long long int var_15 = 17255591680740499434ULL;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
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
