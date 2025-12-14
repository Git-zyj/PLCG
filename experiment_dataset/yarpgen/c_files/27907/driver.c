#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1289917972;
int var_3 = 1242992537;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)7230;
int zero = 0;
unsigned int var_10 = 1359258317U;
long long int var_11 = -1783707639257423905LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
