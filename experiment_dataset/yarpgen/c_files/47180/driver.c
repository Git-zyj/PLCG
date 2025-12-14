#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2114579358;
long long int var_1 = -9136157889931545721LL;
short var_2 = (short)-16643;
unsigned short var_5 = (unsigned short)39348;
signed char var_6 = (signed char)24;
short var_7 = (short)18491;
long long int var_8 = -2831889937673239474LL;
int zero = 0;
int var_11 = 18658793;
int var_12 = -1890073873;
int var_13 = -1695616411;
void init() {
}

void checksum() {
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
