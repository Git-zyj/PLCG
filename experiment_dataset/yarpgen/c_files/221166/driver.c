#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2043753149;
int var_5 = -146465632;
signed char var_6 = (signed char)46;
long long int var_9 = -2907640771548018766LL;
int var_10 = 1633027771;
unsigned char var_12 = (unsigned char)222;
int zero = 0;
unsigned char var_16 = (unsigned char)144;
unsigned long long int var_17 = 16999655835735821249ULL;
int var_18 = 750089107;
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
