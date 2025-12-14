#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12842569224175774683ULL;
short var_6 = (short)-12946;
long long int var_7 = -3678573232309119205LL;
unsigned int var_8 = 2441746871U;
long long int var_9 = -7946498556028242170LL;
unsigned long long int var_11 = 6557361618923617080ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 4625305939988972326ULL;
long long int var_18 = 6089721245328939447LL;
void init() {
}

void checksum() {
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
