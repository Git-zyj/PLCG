#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12785938090438311538ULL;
unsigned long long int var_2 = 18017639102996519010ULL;
unsigned long long int var_10 = 9150390737777598537ULL;
unsigned short var_11 = (unsigned short)63326;
long long int var_12 = 6011640958940623373LL;
int zero = 0;
unsigned long long int var_13 = 9219162687078824030ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
