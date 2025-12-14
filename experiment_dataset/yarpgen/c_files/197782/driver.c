#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1927047986503534299LL;
short var_4 = (short)16555;
unsigned int var_10 = 1460266767U;
int var_16 = -971140923;
int zero = 0;
short var_18 = (short)13588;
unsigned short var_19 = (unsigned short)50557;
signed char var_20 = (signed char)55;
unsigned int var_21 = 3499405842U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
