#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4156122009998185894ULL;
_Bool var_1 = (_Bool)0;
long long int var_3 = -1057926678042624721LL;
unsigned int var_5 = 2534250576U;
long long int var_8 = 3102663832224700983LL;
unsigned long long int var_9 = 13794665724374351548ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3757435608U;
int var_14 = 185745124;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
