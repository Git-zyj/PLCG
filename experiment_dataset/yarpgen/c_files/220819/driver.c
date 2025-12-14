#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-124;
unsigned char var_4 = (unsigned char)41;
long long int var_5 = 7291918532782373447LL;
short var_6 = (short)8142;
unsigned long long int var_7 = 6743215448348355090ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
unsigned long long int var_13 = 15442411577305980560ULL;
signed char var_14 = (signed char)80;
signed char var_15 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
