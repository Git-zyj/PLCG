#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1299220560;
signed char var_4 = (signed char)11;
signed char var_6 = (signed char)-57;
int var_8 = 2097953258;
int var_9 = 695819362;
int var_10 = 731738326;
signed char var_11 = (signed char)-54;
int var_12 = 1614448485;
int var_14 = -669483489;
int zero = 0;
int var_15 = -823530948;
int var_16 = -1525571741;
signed char var_17 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
