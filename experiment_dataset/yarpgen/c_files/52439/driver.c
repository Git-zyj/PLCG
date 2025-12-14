#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4205776326U;
unsigned short var_10 = (unsigned short)49799;
unsigned short var_17 = (unsigned short)54913;
int zero = 0;
int var_18 = 243359720;
unsigned short var_19 = (unsigned short)39477;
int var_20 = 2139122278;
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
