#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21063;
_Bool var_2 = (_Bool)0;
long long int var_3 = -7131815065931285819LL;
unsigned int var_9 = 3073077055U;
unsigned long long int var_10 = 117641537403035040ULL;
int var_12 = 849580957;
int var_13 = 1167946330;
int zero = 0;
long long int var_16 = -353598639280135640LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6473311101166892346LL;
short var_19 = (short)24726;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
