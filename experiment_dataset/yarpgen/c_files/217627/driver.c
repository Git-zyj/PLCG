#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1284035039;
unsigned int var_3 = 3862129455U;
unsigned short var_4 = (unsigned short)45450;
int var_7 = -1906206193;
short var_8 = (short)21354;
int zero = 0;
int var_10 = 977512386;
short var_11 = (short)11121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
