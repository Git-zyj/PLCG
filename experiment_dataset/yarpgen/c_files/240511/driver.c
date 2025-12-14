#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1738374288U;
unsigned long long int var_9 = 15973672032013501957ULL;
unsigned long long int var_11 = 7749645795304706722ULL;
int zero = 0;
unsigned int var_17 = 852160879U;
int var_18 = 1437440328;
unsigned long long int var_19 = 18017261796333538899ULL;
unsigned int var_20 = 2921902237U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
