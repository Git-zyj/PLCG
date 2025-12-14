#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11298;
unsigned long long int var_3 = 15822124896333823438ULL;
signed char var_10 = (signed char)-127;
int zero = 0;
unsigned long long int var_12 = 14976532001472187604ULL;
unsigned long long int var_13 = 6190731307348060446ULL;
short var_14 = (short)-25998;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
