#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10107319796155285562ULL;
unsigned char var_8 = (unsigned char)213;
unsigned int var_11 = 3590803516U;
int zero = 0;
unsigned char var_17 = (unsigned char)126;
signed char var_18 = (signed char)95;
long long int var_19 = -1517726243905003099LL;
unsigned char var_20 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
