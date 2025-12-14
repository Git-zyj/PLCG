#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13369;
unsigned char var_4 = (unsigned char)233;
int var_9 = -1176076286;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-23749;
unsigned long long int var_12 = 2980313206758699842ULL;
unsigned char var_13 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
