#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-20;
unsigned int var_11 = 1189931175U;
unsigned long long int var_14 = 6618353192419775400ULL;
int var_19 = 698466548;
int zero = 0;
int var_20 = 281244565;
unsigned int var_21 = 4074330535U;
void init() {
}

void checksum() {
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
