#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8966279089556611637ULL;
int var_11 = 1975163696;
int zero = 0;
unsigned long long int var_15 = 6475872782757689528ULL;
unsigned short var_16 = (unsigned short)19080;
int var_17 = -1699611302;
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
