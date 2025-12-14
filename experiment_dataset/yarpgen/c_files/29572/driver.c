#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -5226968648542580118LL;
short var_7 = (short)15702;
unsigned char var_8 = (unsigned char)252;
unsigned char var_9 = (unsigned char)89;
unsigned long long int var_10 = 15506951261301437722ULL;
signed char var_11 = (signed char)-2;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
signed char var_15 = (signed char)-26;
unsigned int var_16 = 2975399854U;
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
