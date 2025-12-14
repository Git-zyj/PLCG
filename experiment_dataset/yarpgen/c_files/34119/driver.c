#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1741725998U;
short var_4 = (short)-22349;
int var_5 = -88349464;
unsigned int var_6 = 1077247211U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 5083484698849453783ULL;
long long int var_11 = -4515914148527882502LL;
unsigned int var_12 = 3746417373U;
signed char var_13 = (signed char)-107;
int zero = 0;
long long int var_14 = -1130056491331683923LL;
unsigned int var_15 = 2902975197U;
short var_16 = (short)25414;
unsigned short var_17 = (unsigned short)48121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
