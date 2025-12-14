#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10026388141454949955ULL;
int var_5 = -326791200;
long long int var_9 = 327129788262456642LL;
unsigned short var_11 = (unsigned short)46677;
int zero = 0;
unsigned char var_15 = (unsigned char)162;
unsigned long long int var_16 = 6546224703921669431ULL;
signed char var_17 = (signed char)37;
void init() {
}

void checksum() {
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
