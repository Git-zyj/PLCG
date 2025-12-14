#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3953186998134479789LL;
short var_7 = (short)20827;
unsigned long long int var_8 = 3939619027648023395ULL;
unsigned int var_10 = 2672865237U;
long long int var_13 = 5639204567441638742LL;
long long int var_16 = -6583576619641810456LL;
int zero = 0;
short var_20 = (short)-29919;
long long int var_21 = 3089018453038103613LL;
short var_22 = (short)11580;
long long int var_23 = 8190074756078199424LL;
signed char var_24 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
