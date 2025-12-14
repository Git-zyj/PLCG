#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33557;
unsigned long long int var_7 = 7144616596521965646ULL;
unsigned int var_12 = 863151653U;
int zero = 0;
signed char var_13 = (signed char)109;
unsigned long long int var_14 = 607149552464281746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
