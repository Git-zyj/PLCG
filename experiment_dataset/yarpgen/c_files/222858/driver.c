#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1801205947;
signed char var_2 = (signed char)93;
unsigned long long int var_4 = 8787041301893907426ULL;
signed char var_8 = (signed char)3;
int zero = 0;
int var_11 = 1199456979;
unsigned int var_12 = 4273118796U;
void init() {
}

void checksum() {
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
