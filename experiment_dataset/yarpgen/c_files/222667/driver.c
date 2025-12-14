#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 562539907U;
int var_4 = -1020442029;
unsigned long long int var_8 = 7792220253656276444ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 15869594859802052596ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 9533033395907200566ULL;
unsigned long long int var_17 = 7186845239185462281ULL;
void init() {
}

void checksum() {
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
