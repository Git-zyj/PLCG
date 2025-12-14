#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14880;
int var_6 = 1088605298;
long long int var_7 = -1707548514489183086LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)174;
unsigned short var_11 = (unsigned short)9152;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)14851;
unsigned long long int var_16 = 614055773283945757ULL;
void init() {
}

void checksum() {
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
