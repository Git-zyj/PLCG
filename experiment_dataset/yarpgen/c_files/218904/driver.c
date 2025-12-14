#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31034;
short var_3 = (short)23492;
unsigned char var_8 = (unsigned char)169;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
long long int var_14 = -4137557401754253245LL;
short var_15 = (short)-14497;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
