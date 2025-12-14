#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3956067082268992906LL;
unsigned int var_2 = 940355295U;
unsigned int var_3 = 3452082014U;
signed char var_4 = (signed char)-5;
unsigned long long int var_6 = 12949287184732986696ULL;
signed char var_9 = (signed char)-35;
signed char var_11 = (signed char)101;
int zero = 0;
signed char var_14 = (signed char)-91;
unsigned long long int var_15 = 17535118195896433141ULL;
unsigned short var_16 = (unsigned short)5729;
void init() {
}

void checksum() {
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
