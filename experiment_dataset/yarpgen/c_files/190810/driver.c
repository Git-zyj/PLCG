#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7233791199950782687LL;
unsigned short var_3 = (unsigned short)47008;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
int var_15 = -1172150712;
unsigned short var_16 = (unsigned short)61637;
void init() {
}

void checksum() {
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
