#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28894;
short var_9 = (short)-5181;
unsigned long long int var_15 = 11805011198119742552ULL;
short var_16 = (short)24182;
int zero = 0;
unsigned char var_17 = (unsigned char)194;
long long int var_18 = 2064295646494582832LL;
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
