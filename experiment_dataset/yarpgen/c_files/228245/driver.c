#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10694524838030460906ULL;
signed char var_4 = (signed char)107;
unsigned long long int var_5 = 15179550367267969835ULL;
int var_6 = -1973356608;
int var_8 = 13711570;
long long int var_13 = 8726795081746119304LL;
unsigned short var_16 = (unsigned short)46227;
int zero = 0;
int var_20 = 223543772;
unsigned char var_21 = (unsigned char)151;
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
