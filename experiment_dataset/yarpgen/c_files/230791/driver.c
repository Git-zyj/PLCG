#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26492;
short var_2 = (short)-24862;
unsigned short var_7 = (unsigned short)35223;
unsigned long long int var_8 = 14068516744111281660ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)64368;
unsigned char var_12 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
