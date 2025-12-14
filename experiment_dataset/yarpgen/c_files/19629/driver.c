#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1599218317069498351LL;
signed char var_11 = (signed char)-83;
long long int var_13 = 5535830758659344652LL;
long long int var_14 = 942254237661690140LL;
signed char var_15 = (signed char)35;
unsigned short var_16 = (unsigned short)943;
int zero = 0;
signed char var_18 = (signed char)-75;
long long int var_19 = -7385802483715598527LL;
signed char var_20 = (signed char)9;
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
