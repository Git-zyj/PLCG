#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
int var_11 = 70875826;
unsigned long long int var_14 = 1818398057812479851ULL;
unsigned int var_16 = 233655082U;
int zero = 0;
unsigned short var_18 = (unsigned short)11226;
int var_19 = -2098321670;
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
