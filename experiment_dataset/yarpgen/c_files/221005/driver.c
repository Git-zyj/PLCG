#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 612474563U;
unsigned int var_6 = 1605375953U;
unsigned long long int var_9 = 1626222526333674007ULL;
unsigned char var_14 = (unsigned char)252;
int zero = 0;
int var_15 = 1285896556;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
