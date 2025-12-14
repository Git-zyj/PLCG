#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3745550383054935591ULL;
unsigned int var_6 = 125739425U;
unsigned int var_8 = 3751982042U;
unsigned int var_10 = 1253614170U;
signed char var_13 = (signed char)97;
int zero = 0;
signed char var_20 = (signed char)72;
unsigned int var_21 = 4027532233U;
signed char var_22 = (signed char)-19;
signed char var_23 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
