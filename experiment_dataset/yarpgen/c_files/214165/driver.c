#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20162;
unsigned int var_1 = 226794662U;
signed char var_2 = (signed char)43;
unsigned long long int var_7 = 15512778651254836005ULL;
int zero = 0;
unsigned long long int var_13 = 16277819283133438913ULL;
unsigned int var_14 = 1314782585U;
short var_15 = (short)807;
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
