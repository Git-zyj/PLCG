#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2300510526U;
unsigned int var_5 = 2280563605U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1813615516U;
_Bool var_9 = (_Bool)0;
int var_10 = 2036539198;
int zero = 0;
unsigned int var_12 = 2540761107U;
unsigned int var_13 = 1643412932U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
