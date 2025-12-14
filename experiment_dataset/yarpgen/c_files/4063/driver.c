#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)9293;
unsigned long long int var_5 = 12322051566201311544ULL;
unsigned short var_7 = (unsigned short)29252;
unsigned int var_8 = 550302494U;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
short var_11 = (short)15700;
_Bool var_12 = (_Bool)0;
short var_13 = (short)12440;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
