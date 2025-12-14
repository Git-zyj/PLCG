#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1787856691940573476LL;
int var_3 = -1455061010;
unsigned long long int var_4 = 18182382556643155192ULL;
int var_5 = 1558723898;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)42;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3708621181U;
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
