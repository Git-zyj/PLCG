#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26086;
unsigned long long int var_1 = 11122356760871566222ULL;
long long int var_7 = 7365031468333139492LL;
unsigned char var_9 = (unsigned char)245;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4249359688U;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
