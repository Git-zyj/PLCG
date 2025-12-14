#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6231383244697714498LL;
long long int var_2 = -2099623885253623309LL;
long long int var_3 = -8191135282239614633LL;
unsigned long long int var_5 = 1723274031768038355ULL;
signed char var_6 = (signed char)25;
long long int var_15 = 2743503837090494664LL;
int zero = 0;
signed char var_16 = (signed char)-19;
unsigned char var_17 = (unsigned char)32;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
