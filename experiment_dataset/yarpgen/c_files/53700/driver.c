#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 348504526U;
unsigned int var_5 = 3761210832U;
unsigned char var_7 = (unsigned char)114;
unsigned short var_8 = (unsigned short)8788;
int zero = 0;
short var_11 = (short)29993;
unsigned short var_12 = (unsigned short)21927;
short var_13 = (short)-26850;
short var_14 = (short)17818;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
