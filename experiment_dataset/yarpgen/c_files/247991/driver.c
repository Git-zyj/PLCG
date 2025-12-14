#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13808738223274037253ULL;
unsigned int var_11 = 10966808U;
unsigned long long int var_12 = 3906024843512519669ULL;
int zero = 0;
short var_16 = (short)-20906;
unsigned char var_17 = (unsigned char)193;
void init() {
}

void checksum() {
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
