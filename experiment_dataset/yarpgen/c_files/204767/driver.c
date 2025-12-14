#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 156877034;
int var_10 = 527984681;
short var_17 = (short)-3167;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1577347500U;
short var_21 = (short)-24889;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-30839;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
