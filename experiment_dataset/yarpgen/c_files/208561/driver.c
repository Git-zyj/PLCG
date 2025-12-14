#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3779;
short var_4 = (short)105;
short var_5 = (short)-25493;
unsigned int var_7 = 2709928752U;
int zero = 0;
signed char var_10 = (signed char)-57;
int var_11 = 1720895338;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
