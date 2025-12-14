#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 2115298195;
long long int var_7 = 6819722254700454703LL;
short var_9 = (short)-4853;
long long int var_11 = -1526193365823952868LL;
int zero = 0;
int var_13 = 1045314433;
int var_14 = -963030645;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3362706510U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
