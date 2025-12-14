#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_10 = (unsigned short)32594;
unsigned int var_15 = 1850886118U;
unsigned long long int var_16 = 12373708984794592158ULL;
int zero = 0;
int var_18 = 124494053;
long long int var_19 = -2327268594730133361LL;
long long int var_20 = 6023608039200758364LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
