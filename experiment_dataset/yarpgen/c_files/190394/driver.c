#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
signed char var_2 = (signed char)-25;
long long int var_3 = 5504234903966169754LL;
signed char var_4 = (signed char)22;
signed char var_7 = (signed char)19;
int var_8 = 747456497;
int zero = 0;
signed char var_10 = (signed char)45;
signed char var_11 = (signed char)90;
signed char var_12 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
