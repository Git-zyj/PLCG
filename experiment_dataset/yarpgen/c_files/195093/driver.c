#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2408144832U;
long long int var_4 = -6681894065460144130LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 4407687607476131088ULL;
unsigned long long int var_10 = 2215619206518676360ULL;
int zero = 0;
long long int var_13 = 7892295623698653855LL;
unsigned short var_14 = (unsigned short)2311;
unsigned short var_15 = (unsigned short)14159;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
