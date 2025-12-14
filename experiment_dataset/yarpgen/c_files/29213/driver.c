#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1554225108U;
unsigned int var_4 = 3863982028U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2938997918U;
unsigned short var_13 = (unsigned short)23135;
int zero = 0;
signed char var_14 = (signed char)-114;
unsigned long long int var_15 = 2090390661303762530ULL;
void init() {
}

void checksum() {
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
