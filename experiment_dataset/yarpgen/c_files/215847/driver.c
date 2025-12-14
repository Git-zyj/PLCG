#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21697;
unsigned char var_2 = (unsigned char)113;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)124;
int var_9 = -1777812489;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3346261940504388082LL;
int zero = 0;
int var_14 = 633414486;
long long int var_15 = -690516638846150096LL;
unsigned long long int var_16 = 14760684182924078453ULL;
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
