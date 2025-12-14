#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-16766;
unsigned char var_15 = (unsigned char)51;
unsigned char var_17 = (unsigned char)171;
int zero = 0;
short var_18 = (short)7702;
unsigned int var_19 = 1282158812U;
unsigned char var_20 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
