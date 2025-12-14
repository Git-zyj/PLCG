#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3674252692U;
unsigned int var_9 = 2740714069U;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)10293;
signed char var_14 = (signed char)69;
int zero = 0;
int var_19 = 25805230;
unsigned long long int var_20 = 5237280146956664413ULL;
int var_21 = 193521840;
unsigned long long int var_22 = 1743731357979037463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
