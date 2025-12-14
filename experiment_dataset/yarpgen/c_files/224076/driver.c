#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22951;
unsigned long long int var_6 = 7267120935272024973ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1358148328U;
long long int var_19 = 11747563283813959LL;
unsigned int var_20 = 3222909365U;
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
