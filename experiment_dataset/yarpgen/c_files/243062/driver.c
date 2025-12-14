#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3950395147U;
long long int var_5 = -266317181221897420LL;
int zero = 0;
unsigned long long int var_11 = 9918926383961772841ULL;
signed char var_12 = (signed char)-32;
long long int var_13 = -5462527514841091075LL;
unsigned short var_14 = (unsigned short)39627;
int var_15 = -1575699731;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
