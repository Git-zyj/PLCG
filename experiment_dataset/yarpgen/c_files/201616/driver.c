#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19320;
unsigned char var_5 = (unsigned char)38;
int var_6 = 672108362;
long long int var_7 = -399447004271135345LL;
unsigned short var_9 = (unsigned short)46950;
unsigned int var_14 = 2481927404U;
int var_16 = 1368595748;
int zero = 0;
unsigned int var_17 = 981266091U;
unsigned char var_18 = (unsigned char)85;
long long int var_19 = 8358802559236025813LL;
unsigned short var_20 = (unsigned short)17029;
signed char var_21 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
