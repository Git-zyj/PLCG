#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10992;
unsigned char var_11 = (unsigned char)32;
int var_12 = 1424928058;
unsigned short var_14 = (unsigned short)17531;
int zero = 0;
short var_19 = (short)-31960;
unsigned int var_20 = 528323392U;
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
