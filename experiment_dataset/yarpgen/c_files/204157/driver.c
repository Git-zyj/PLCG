#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
long long int var_4 = 7402313331383574956LL;
unsigned int var_9 = 1471027105U;
signed char var_12 = (signed char)48;
int var_16 = -452540952;
signed char var_17 = (signed char)114;
int zero = 0;
unsigned char var_18 = (unsigned char)198;
int var_19 = -819147761;
int var_20 = 1055294945;
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
