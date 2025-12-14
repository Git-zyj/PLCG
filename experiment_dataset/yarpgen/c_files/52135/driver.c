#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1212228776;
unsigned short var_6 = (unsigned short)34449;
short var_10 = (short)-4206;
unsigned char var_12 = (unsigned char)208;
int zero = 0;
unsigned char var_13 = (unsigned char)167;
unsigned int var_14 = 843293351U;
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
