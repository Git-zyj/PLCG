#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4043490608448064440ULL;
int var_3 = 2012020398;
_Bool var_6 = (_Bool)0;
int var_8 = -260296660;
int var_9 = 1101764448;
unsigned int var_10 = 2028546744U;
unsigned int var_11 = 865966377U;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)69;
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
