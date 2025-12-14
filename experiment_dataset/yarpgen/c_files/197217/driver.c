#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4083823366U;
unsigned char var_10 = (unsigned char)190;
short var_14 = (short)31273;
short var_17 = (short)-30448;
int zero = 0;
unsigned int var_19 = 167675021U;
unsigned long long int var_20 = 5798344938520579153ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
