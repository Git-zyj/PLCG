#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44704;
unsigned short var_6 = (unsigned short)26222;
unsigned long long int var_17 = 10578725240098868149ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)16974;
int var_21 = 720936722;
unsigned int var_22 = 2731811721U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
