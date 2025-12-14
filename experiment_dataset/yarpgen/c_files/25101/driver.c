#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)48;
unsigned int var_6 = 1274615390U;
int var_7 = 1161890207;
int var_11 = -1878365288;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -94061168;
unsigned int var_14 = 3454272680U;
int var_15 = 1871082471;
int var_16 = 598399031;
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
