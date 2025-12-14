#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)83;
unsigned char var_10 = (unsigned char)37;
unsigned char var_16 = (unsigned char)107;
int zero = 0;
long long int var_17 = -1912997052189154216LL;
unsigned int var_18 = 464048145U;
void init() {
}

void checksum() {
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
