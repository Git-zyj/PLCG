#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)45;
int var_4 = 1011186336;
short var_7 = (short)23318;
int var_10 = 556561845;
unsigned int var_12 = 1131103499U;
int var_14 = -1600656891;
int zero = 0;
short var_16 = (short)-6002;
long long int var_17 = 3175940837381568666LL;
signed char var_18 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
