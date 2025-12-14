#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6423257673636579987LL;
unsigned char var_8 = (unsigned char)42;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 2977965712339243898LL;
short var_13 = (short)-3186;
short var_14 = (short)8;
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
