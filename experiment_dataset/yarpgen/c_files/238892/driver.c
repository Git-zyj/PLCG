#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20290;
unsigned long long int var_4 = 1493129131194955888ULL;
signed char var_8 = (signed char)8;
unsigned short var_12 = (unsigned short)32771;
int zero = 0;
unsigned int var_14 = 2608255808U;
short var_15 = (short)-11003;
signed char var_16 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
