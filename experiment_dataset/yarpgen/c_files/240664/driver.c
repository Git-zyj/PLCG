#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)1;
int var_13 = -1215460620;
unsigned short var_16 = (unsigned short)19071;
unsigned int var_17 = 2672988029U;
int zero = 0;
long long int var_18 = 1442822133439805594LL;
unsigned int var_19 = 1425498291U;
short var_20 = (short)3285;
unsigned long long int var_21 = 5802060437293638291ULL;
unsigned char var_22 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
