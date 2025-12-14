#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1346867918;
unsigned int var_5 = 3172586244U;
int var_7 = 1124504551;
int var_8 = 583949982;
int zero = 0;
short var_11 = (short)-28951;
int var_12 = -1083176465;
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
