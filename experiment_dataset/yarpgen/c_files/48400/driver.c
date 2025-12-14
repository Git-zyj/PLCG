#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7144635778001107446LL;
int var_8 = -1509292161;
long long int var_9 = 2020930135666867015LL;
unsigned int var_10 = 3106233028U;
short var_11 = (short)-1943;
unsigned int var_13 = 3093531703U;
short var_14 = (short)21317;
int zero = 0;
long long int var_16 = -7279780408424984683LL;
unsigned int var_17 = 1021125612U;
unsigned int var_18 = 2966208873U;
_Bool var_19 = (_Bool)1;
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
