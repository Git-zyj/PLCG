#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32547;
int var_11 = -2008550597;
long long int var_13 = -8220494094715788134LL;
signed char var_17 = (signed char)104;
int zero = 0;
unsigned char var_20 = (unsigned char)111;
int var_21 = -327713546;
signed char var_22 = (signed char)1;
unsigned short var_23 = (unsigned short)37818;
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
