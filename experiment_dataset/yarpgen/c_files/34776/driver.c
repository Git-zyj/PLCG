#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4633;
unsigned char var_4 = (unsigned char)178;
unsigned short var_6 = (unsigned short)11215;
unsigned short var_9 = (unsigned short)51231;
unsigned int var_10 = 3037248425U;
int zero = 0;
int var_12 = 2126948289;
short var_13 = (short)13981;
long long int var_14 = -7095369391193796891LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
