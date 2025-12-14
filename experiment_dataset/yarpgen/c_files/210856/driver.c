#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11933;
unsigned long long int var_2 = 2336958300386075768ULL;
int var_3 = -894485526;
short var_5 = (short)-14485;
unsigned int var_15 = 3141324113U;
int zero = 0;
unsigned char var_17 = (unsigned char)215;
short var_18 = (short)-4119;
unsigned short var_19 = (unsigned short)50711;
long long int var_20 = 6446992960107627279LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
