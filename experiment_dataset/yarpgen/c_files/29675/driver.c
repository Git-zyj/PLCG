#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 536477662U;
int var_3 = 637167529;
unsigned long long int var_5 = 21522664627694546ULL;
unsigned short var_6 = (unsigned short)45209;
int var_7 = 1219880869;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
unsigned int var_21 = 2684024693U;
void init() {
}

void checksum() {
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
