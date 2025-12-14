#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 60125150U;
long long int var_5 = 6438976037488758540LL;
unsigned short var_6 = (unsigned short)1111;
signed char var_9 = (signed char)47;
short var_11 = (short)30000;
int zero = 0;
signed char var_14 = (signed char)-74;
long long int var_15 = 2571968058871267378LL;
unsigned long long int var_16 = 17308811915790092915ULL;
int var_17 = -1154346990;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
