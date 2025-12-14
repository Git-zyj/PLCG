#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 10201364465474668107ULL;
unsigned long long int var_5 = 11647199111003103944ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-120;
unsigned int var_19 = 47859392U;
unsigned short var_20 = (unsigned short)62848;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
