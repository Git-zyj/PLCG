#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6535702202706959275LL;
unsigned long long int var_7 = 15120468527828035354ULL;
unsigned long long int var_11 = 13084394696991748275ULL;
unsigned char var_13 = (unsigned char)105;
unsigned char var_17 = (unsigned char)172;
int zero = 0;
int var_18 = -821097674;
signed char var_19 = (signed char)109;
void init() {
}

void checksum() {
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
