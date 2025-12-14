#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1752741362U;
unsigned int var_2 = 2928705559U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3436679323U;
unsigned int var_9 = 1338648091U;
int zero = 0;
unsigned int var_10 = 708147097U;
_Bool var_11 = (_Bool)1;
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
