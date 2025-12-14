#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37240;
long long int var_7 = -8228497528909449072LL;
unsigned short var_8 = (unsigned short)54131;
int zero = 0;
unsigned short var_12 = (unsigned short)15024;
unsigned short var_13 = (unsigned short)38370;
unsigned char var_14 = (unsigned char)41;
void init() {
}

void checksum() {
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
