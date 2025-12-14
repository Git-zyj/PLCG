#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 8759076897672135697ULL;
signed char var_15 = (signed char)-30;
int zero = 0;
unsigned char var_20 = (unsigned char)136;
signed char var_21 = (signed char)-121;
short var_22 = (short)-3846;
unsigned int var_23 = 1789077738U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
