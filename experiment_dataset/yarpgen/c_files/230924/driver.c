#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2596511719U;
unsigned short var_8 = (unsigned short)59102;
unsigned short var_9 = (unsigned short)45039;
int zero = 0;
unsigned long long int var_10 = 1921043624744950603ULL;
unsigned short var_11 = (unsigned short)21194;
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
