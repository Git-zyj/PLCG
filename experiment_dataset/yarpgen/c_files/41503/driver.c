#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)19862;
unsigned char var_11 = (unsigned char)16;
unsigned short var_12 = (unsigned short)28814;
unsigned long long int var_13 = 7301496259875668051ULL;
int zero = 0;
short var_14 = (short)-341;
long long int var_15 = -1325157640515838021LL;
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
