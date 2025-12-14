#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18929;
int var_4 = -681824707;
unsigned long long int var_5 = 14585118341387857402ULL;
short var_9 = (short)-13557;
short var_10 = (short)10384;
unsigned char var_11 = (unsigned char)245;
int zero = 0;
unsigned long long int var_13 = 3540877779655773607ULL;
short var_14 = (short)-1496;
unsigned char var_15 = (unsigned char)183;
int var_16 = 1560730674;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
