#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3589978041U;
unsigned short var_2 = (unsigned short)47456;
unsigned char var_7 = (unsigned char)164;
int var_8 = 522350026;
int zero = 0;
int var_10 = -1277644479;
unsigned int var_11 = 1124313095U;
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
