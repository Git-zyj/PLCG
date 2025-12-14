#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
unsigned int var_7 = 4219026823U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 4278469993U;
unsigned int var_16 = 1010882294U;
int zero = 0;
long long int var_20 = -890839753359210443LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)1;
unsigned int var_23 = 903490458U;
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
