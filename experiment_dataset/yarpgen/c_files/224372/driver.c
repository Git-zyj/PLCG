#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1234577773;
signed char var_3 = (signed char)73;
signed char var_7 = (signed char)-14;
signed char var_9 = (signed char)115;
signed char var_10 = (signed char)48;
signed char var_12 = (signed char)33;
int var_13 = 1245894309;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)31;
int zero = 0;
int var_19 = -1360010640;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
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
