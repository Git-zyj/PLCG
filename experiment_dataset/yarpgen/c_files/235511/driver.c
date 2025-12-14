#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16139024015056158274ULL;
unsigned long long int var_6 = 12921263696902522867ULL;
unsigned short var_7 = (unsigned short)6690;
int zero = 0;
long long int var_11 = -3887059812290889277LL;
unsigned short var_12 = (unsigned short)25377;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
