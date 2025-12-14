#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7026721214606432148ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2087141717U;
short var_7 = (short)27788;
int zero = 0;
int var_10 = 2017982018;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)208;
signed char var_13 = (signed char)-114;
unsigned int var_14 = 2747269747U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
