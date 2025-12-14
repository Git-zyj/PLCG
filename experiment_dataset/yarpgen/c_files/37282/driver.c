#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43372;
unsigned long long int var_9 = 7234445437060981714ULL;
int var_10 = 203959341;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1827974471;
unsigned int var_16 = 818843171U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
