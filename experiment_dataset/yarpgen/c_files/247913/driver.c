#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned long long int var_1 = 15639950272915507826ULL;
int var_2 = 896477731;
short var_3 = (short)26171;
signed char var_5 = (signed char)-106;
short var_6 = (short)17470;
int zero = 0;
unsigned short var_13 = (unsigned short)4783;
short var_14 = (short)-23979;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
