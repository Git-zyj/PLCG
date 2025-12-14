#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16198980005732745411ULL;
unsigned char var_5 = (unsigned char)94;
unsigned long long int var_7 = 13500257894284795047ULL;
short var_8 = (short)-20363;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 8260382385433618957ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4209612670U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
