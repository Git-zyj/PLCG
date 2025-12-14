#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -401322465;
long long int var_9 = 7114552424016777789LL;
unsigned int var_12 = 2498719539U;
_Bool var_14 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 14302785209665221136ULL;
long long int var_21 = 460412460062028688LL;
int var_22 = 652982889;
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
