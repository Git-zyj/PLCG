#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3470689211992056092LL;
unsigned long long int var_5 = 13726834476810519833ULL;
long long int var_8 = -8523710995931414859LL;
long long int var_9 = -7245545581329598962LL;
unsigned char var_10 = (unsigned char)194;
int zero = 0;
short var_12 = (short)4729;
long long int var_13 = -7528162671300588197LL;
short var_14 = (short)19105;
unsigned long long int var_15 = 667298126642695309ULL;
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
