#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)346;
unsigned long long int var_6 = 15573318408342333311ULL;
short var_7 = (short)17375;
int zero = 0;
signed char var_20 = (signed char)98;
short var_21 = (short)-31405;
unsigned long long int var_22 = 1129153194313801211ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
