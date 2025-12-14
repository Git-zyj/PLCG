#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2762777403967884364LL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 6029708596796589731ULL;
int zero = 0;
unsigned long long int var_12 = 14753294319970809840ULL;
unsigned char var_13 = (unsigned char)31;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7529729492956727401LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
