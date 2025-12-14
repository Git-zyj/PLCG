#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned long long int var_1 = 2931301796049397190ULL;
unsigned short var_5 = (unsigned short)22307;
long long int var_7 = -5246151164010818117LL;
unsigned int var_13 = 247374601U;
unsigned char var_14 = (unsigned char)223;
unsigned int var_15 = 3352246865U;
int zero = 0;
unsigned char var_16 = (unsigned char)122;
short var_17 = (short)-31749;
unsigned char var_18 = (unsigned char)99;
void init() {
}

void checksum() {
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
