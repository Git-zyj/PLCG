#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7238;
unsigned int var_6 = 4284168042U;
unsigned long long int var_9 = 9272841260658105768ULL;
long long int var_11 = 3434842403407527088LL;
signed char var_13 = (signed char)126;
int zero = 0;
unsigned int var_17 = 3409562109U;
signed char var_18 = (signed char)-7;
void init() {
}

void checksum() {
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
