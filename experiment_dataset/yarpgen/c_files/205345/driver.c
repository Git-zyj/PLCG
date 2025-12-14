#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-22807;
unsigned int var_7 = 3664315048U;
unsigned long long int var_9 = 6458466465829374285ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)9741;
short var_14 = (short)-22833;
short var_15 = (short)-29603;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
