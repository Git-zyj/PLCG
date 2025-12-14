#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 677523751U;
signed char var_4 = (signed char)45;
unsigned short var_11 = (unsigned short)11672;
int var_14 = 1948423189;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1997746909;
unsigned int var_19 = 3234297778U;
unsigned long long int var_20 = 2700887441553364249ULL;
unsigned short var_21 = (unsigned short)23581;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
