#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
short var_1 = (short)-25892;
short var_10 = (short)24385;
int zero = 0;
long long int var_14 = 5575684881598169846LL;
unsigned int var_15 = 776603609U;
long long int var_16 = 4405980079567050109LL;
unsigned char var_17 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
