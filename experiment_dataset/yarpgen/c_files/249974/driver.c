#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1380739178U;
unsigned char var_3 = (unsigned char)145;
unsigned int var_5 = 2818998474U;
unsigned long long int var_11 = 8259046905328089549ULL;
int zero = 0;
unsigned long long int var_14 = 1534162475332675893ULL;
unsigned char var_15 = (unsigned char)169;
unsigned char var_16 = (unsigned char)215;
unsigned int var_17 = 3144352395U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
