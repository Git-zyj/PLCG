#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7840941331769757359ULL;
int var_7 = 1341437338;
unsigned char var_8 = (unsigned char)223;
short var_11 = (short)2473;
int zero = 0;
unsigned char var_14 = (unsigned char)181;
short var_15 = (short)-23725;
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
