#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2499967005U;
unsigned long long int var_6 = 1681579457693843576ULL;
unsigned int var_7 = 1369947893U;
unsigned long long int var_10 = 16630035243368353750ULL;
unsigned long long int var_16 = 13103915318896110359ULL;
int var_17 = -918105366;
int zero = 0;
unsigned long long int var_20 = 13421378005948816896ULL;
int var_21 = -802476908;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
