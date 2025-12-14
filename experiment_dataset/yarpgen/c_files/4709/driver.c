#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10302445290190927714ULL;
int var_3 = 763279113;
unsigned char var_4 = (unsigned char)147;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-30710;
signed char var_8 = (signed char)91;
_Bool var_9 = (_Bool)0;
long long int var_11 = 8026206125104482507LL;
int var_14 = -2055583358;
int zero = 0;
unsigned int var_16 = 2318151756U;
unsigned short var_17 = (unsigned short)48498;
unsigned short var_18 = (unsigned short)51523;
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
