#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5956581402237838452ULL;
unsigned long long int var_6 = 2842789718045670554ULL;
unsigned int var_7 = 4279340555U;
int var_12 = -411574890;
int zero = 0;
int var_13 = -696674215;
int var_14 = -1183680415;
unsigned int var_15 = 1922474972U;
void init() {
}

void checksum() {
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
