#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 468516166;
unsigned long long int var_4 = 8417482109492025900ULL;
signed char var_6 = (signed char)60;
int var_9 = 1086972369;
int zero = 0;
long long int var_13 = 7415458418983727313LL;
unsigned char var_14 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
