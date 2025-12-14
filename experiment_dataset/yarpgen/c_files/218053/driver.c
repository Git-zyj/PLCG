#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1219522352U;
short var_8 = (short)8042;
long long int var_9 = 9159388971820373408LL;
long long int var_10 = 2211485119680089248LL;
int zero = 0;
signed char var_15 = (signed char)2;
short var_16 = (short)-8639;
signed char var_17 = (signed char)-94;
signed char var_18 = (signed char)-67;
unsigned int var_19 = 3508574813U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
