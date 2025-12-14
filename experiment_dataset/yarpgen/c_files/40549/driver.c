#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 760902876U;
unsigned char var_2 = (unsigned char)139;
unsigned char var_8 = (unsigned char)181;
int zero = 0;
unsigned int var_13 = 3878224934U;
unsigned int var_14 = 2941275794U;
unsigned short var_15 = (unsigned short)45350;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
