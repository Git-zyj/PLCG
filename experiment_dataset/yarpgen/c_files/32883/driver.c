#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-24860;
unsigned char var_8 = (unsigned char)222;
int var_9 = 1551984460;
short var_10 = (short)-26181;
int zero = 0;
long long int var_14 = -2771495965330238086LL;
short var_15 = (short)9880;
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
