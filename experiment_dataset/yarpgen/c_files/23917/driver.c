#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1325193356U;
signed char var_4 = (signed char)-106;
unsigned int var_7 = 812101604U;
unsigned int var_12 = 1255156176U;
int zero = 0;
unsigned char var_13 = (unsigned char)147;
signed char var_14 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
