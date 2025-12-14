#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15006;
short var_13 = (short)17520;
int zero = 0;
unsigned char var_15 = (unsigned char)9;
unsigned char var_16 = (unsigned char)119;
short var_17 = (short)-27051;
long long int var_18 = 1084399914052997039LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
