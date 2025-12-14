#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3724;
unsigned int var_1 = 3817784428U;
unsigned short var_2 = (unsigned short)26450;
int var_6 = 1357500876;
unsigned int var_10 = 3827488643U;
int zero = 0;
long long int var_13 = -7198314862851801323LL;
unsigned short var_14 = (unsigned short)50728;
long long int var_15 = 7328810426738276191LL;
long long int var_16 = -4715723635195789711LL;
unsigned long long int var_17 = 5528621991542760681ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
