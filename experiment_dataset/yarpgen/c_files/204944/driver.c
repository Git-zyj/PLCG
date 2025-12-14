#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned int var_3 = 4281574746U;
short var_5 = (short)-25712;
long long int var_6 = 2518318664336865453LL;
signed char var_7 = (signed char)-50;
unsigned char var_8 = (unsigned char)222;
int zero = 0;
signed char var_11 = (signed char)-16;
unsigned char var_12 = (unsigned char)49;
signed char var_13 = (signed char)55;
long long int var_14 = 2484674747478930233LL;
int var_15 = 1195498945;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
