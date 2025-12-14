#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -95994697;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 15770332816215663032ULL;
unsigned char var_12 = (unsigned char)101;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
long long int var_18 = -3626722663898843796LL;
unsigned int var_19 = 3037014089U;
signed char var_20 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
