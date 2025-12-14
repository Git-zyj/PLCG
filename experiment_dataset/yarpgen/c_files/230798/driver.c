#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29078;
unsigned char var_11 = (unsigned char)116;
_Bool var_12 = (_Bool)0;
int var_13 = -996967738;
int zero = 0;
unsigned int var_14 = 1659472570U;
unsigned int var_15 = 4000133496U;
int var_16 = -691347896;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
