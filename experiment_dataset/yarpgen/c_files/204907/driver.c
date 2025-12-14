#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-29366;
unsigned char var_10 = (unsigned char)116;
unsigned char var_14 = (unsigned char)80;
int zero = 0;
short var_15 = (short)-12495;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9626075773418021671ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
