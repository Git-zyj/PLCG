#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 938552641U;
unsigned char var_7 = (unsigned char)91;
signed char var_8 = (signed char)-48;
long long int var_9 = 7399394549129237629LL;
signed char var_11 = (signed char)-67;
unsigned long long int var_12 = 8712112368656726153ULL;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
unsigned long long int var_17 = 5463194287353744402ULL;
unsigned int var_18 = 1990532515U;
long long int var_19 = 9074874314726888307LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
