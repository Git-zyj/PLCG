#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2767;
unsigned long long int var_3 = 17040893286159392250ULL;
short var_10 = (short)29773;
int zero = 0;
signed char var_18 = (signed char)-108;
unsigned char var_19 = (unsigned char)115;
long long int var_20 = -2841537835178184619LL;
void init() {
}

void checksum() {
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
