#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5260594307062129096LL;
short var_1 = (short)929;
int var_13 = 57217698;
int zero = 0;
unsigned long long int var_17 = 2614120043109126111ULL;
signed char var_18 = (signed char)-58;
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
