#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1675476479U;
unsigned int var_4 = 3787937756U;
signed char var_5 = (signed char)125;
int var_6 = -1056977729;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-106;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-70;
signed char var_14 = (signed char)-113;
signed char var_15 = (signed char)-15;
int var_16 = 1923962991;
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
