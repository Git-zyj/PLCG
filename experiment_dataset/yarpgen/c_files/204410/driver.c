#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6958387177176185161ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_13 = (unsigned short)40557;
int zero = 0;
unsigned int var_17 = 614929759U;
long long int var_18 = -641121460783756857LL;
short var_19 = (short)10906;
int var_20 = 679868593;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
