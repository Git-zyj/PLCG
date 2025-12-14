#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1579706075418970430LL;
unsigned long long int var_9 = 11445837762930376200ULL;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
unsigned char var_15 = (unsigned char)125;
short var_16 = (short)22918;
void init() {
}

void checksum() {
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
