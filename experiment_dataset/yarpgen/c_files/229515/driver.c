#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 350952219132428482ULL;
_Bool var_3 = (_Bool)1;
int var_6 = 1273849814;
unsigned long long int var_7 = 5472124995355512167ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 545825967;
short var_12 = (short)-12060;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
