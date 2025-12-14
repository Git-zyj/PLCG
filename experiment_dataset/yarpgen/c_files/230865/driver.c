#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
int var_4 = -1702830314;
long long int var_5 = -5897073966219587784LL;
short var_8 = (short)27256;
long long int var_12 = 1025925646721127626LL;
unsigned short var_13 = (unsigned short)53075;
int zero = 0;
unsigned char var_14 = (unsigned char)152;
long long int var_15 = -2966408022095811681LL;
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
