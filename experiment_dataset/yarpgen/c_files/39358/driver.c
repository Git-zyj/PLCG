#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 50008677U;
long long int var_6 = -2904168782793344650LL;
unsigned int var_9 = 1232256347U;
unsigned int var_10 = 3219234923U;
int zero = 0;
unsigned short var_15 = (unsigned short)53607;
long long int var_16 = 4082006154263812972LL;
long long int var_17 = -6181620570244851892LL;
long long int var_18 = -4042565953913789382LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
