#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1198817483;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 1745139597670504621ULL;
unsigned long long int var_6 = 17486905689009698440ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 3179171959997240482ULL;
unsigned long long int var_10 = 319894786383785363ULL;
int zero = 0;
unsigned long long int var_14 = 15362407517462743648ULL;
long long int var_15 = 6457145374253167764LL;
unsigned int var_16 = 3601558902U;
void init() {
}

void checksum() {
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
