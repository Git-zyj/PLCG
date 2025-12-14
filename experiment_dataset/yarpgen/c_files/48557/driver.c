#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)11;
unsigned short var_2 = (unsigned short)13193;
long long int var_5 = 4734955277879919600LL;
unsigned int var_7 = 1038562399U;
signed char var_8 = (signed char)100;
signed char var_10 = (signed char)-66;
unsigned long long int var_12 = 239820290939852418ULL;
int var_13 = 131264555;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
_Bool var_15 = (_Bool)0;
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
