#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 49094084;
unsigned short var_1 = (unsigned short)47821;
unsigned long long int var_8 = 12724569038091473455ULL;
int var_9 = 209677305;
int zero = 0;
unsigned long long int var_19 = 1985535364978007757ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26048;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
