#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 599083721;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)85;
int zero = 0;
signed char var_15 = (signed char)-20;
int var_16 = 1967100291;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7601260391266568713ULL;
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
