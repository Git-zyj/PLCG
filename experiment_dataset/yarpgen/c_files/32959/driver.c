#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 443592507;
unsigned int var_4 = 3476689124U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1937646128U;
unsigned char var_11 = (unsigned char)84;
signed char var_12 = (signed char)36;
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
