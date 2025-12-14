#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1552985050;
unsigned char var_6 = (unsigned char)14;
unsigned short var_11 = (unsigned short)22173;
int zero = 0;
long long int var_12 = 2632859513039276180LL;
int var_13 = 1443831609;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
