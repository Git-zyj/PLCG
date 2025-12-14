#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3170208114U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)37;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 2849659963466301290ULL;
short var_14 = (short)-18756;
int var_15 = 2093816697;
short var_16 = (short)26042;
unsigned long long int var_17 = 1477290666522403368ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)148;
unsigned long long int var_19 = 8580058518876727711ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
