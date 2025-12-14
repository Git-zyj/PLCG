#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22170;
short var_2 = (short)11548;
unsigned int var_7 = 2598404549U;
short var_14 = (short)-9820;
unsigned short var_16 = (unsigned short)36432;
int zero = 0;
unsigned int var_18 = 495985023U;
int var_19 = -1839605691;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
