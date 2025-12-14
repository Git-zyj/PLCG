#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29971;
unsigned long long int var_9 = 8041655684409490378ULL;
long long int var_10 = -8198782806621843480LL;
unsigned int var_11 = 2052552091U;
int zero = 0;
unsigned char var_13 = (unsigned char)236;
short var_14 = (short)5774;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
