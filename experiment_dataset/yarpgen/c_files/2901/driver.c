#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15720512902021469258ULL;
_Bool var_12 = (_Bool)1;
long long int var_15 = 1785040113528528311LL;
int zero = 0;
unsigned int var_16 = 433446702U;
long long int var_17 = -2743350164356901184LL;
long long int var_18 = -6513324174472388212LL;
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
