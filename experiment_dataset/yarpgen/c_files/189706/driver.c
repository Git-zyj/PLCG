#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -6685117417780560855LL;
long long int var_2 = 9127842471192945426LL;
short var_5 = (short)-18627;
long long int var_8 = 6501729946183094207LL;
signed char var_9 = (signed char)-43;
signed char var_11 = (signed char)45;
unsigned char var_12 = (unsigned char)147;
int zero = 0;
unsigned long long int var_13 = 13525112168667530454ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)73;
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
