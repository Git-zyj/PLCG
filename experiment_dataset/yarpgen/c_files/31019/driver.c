#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned long long int var_2 = 13197199884562550567ULL;
_Bool var_4 = (_Bool)1;
short var_9 = (short)26175;
int var_11 = 2003425943;
short var_13 = (short)-1937;
int zero = 0;
unsigned long long int var_16 = 17703006330160099850ULL;
unsigned char var_17 = (unsigned char)49;
short var_18 = (short)-22128;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
