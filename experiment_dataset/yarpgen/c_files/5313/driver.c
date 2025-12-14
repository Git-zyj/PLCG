#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 348837903;
unsigned int var_9 = 3694385076U;
signed char var_10 = (signed char)81;
unsigned char var_15 = (unsigned char)135;
int var_16 = 1624259661;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1326876372;
unsigned int var_21 = 476627376U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
