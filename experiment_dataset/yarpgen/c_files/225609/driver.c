#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3045957333U;
short var_6 = (short)29063;
unsigned long long int var_9 = 5757118811339701668ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-8807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
