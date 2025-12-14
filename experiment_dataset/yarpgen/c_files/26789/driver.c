#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
short var_2 = (short)17446;
signed char var_3 = (signed char)-80;
unsigned int var_5 = 1639298713U;
short var_6 = (short)-32390;
unsigned int var_9 = 2139064680U;
signed char var_11 = (signed char)39;
signed char var_13 = (signed char)41;
int zero = 0;
unsigned long long int var_14 = 6407834369046932682ULL;
unsigned char var_15 = (unsigned char)68;
unsigned long long int var_16 = 7023992263510526784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
