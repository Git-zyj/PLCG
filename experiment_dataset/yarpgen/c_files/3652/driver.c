#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3985229362U;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_7 = -1842402924;
_Bool var_8 = (_Bool)1;
signed char var_15 = (signed char)20;
int zero = 0;
signed char var_16 = (signed char)61;
signed char var_17 = (signed char)-21;
signed char var_18 = (signed char)12;
unsigned short var_19 = (unsigned short)38303;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
