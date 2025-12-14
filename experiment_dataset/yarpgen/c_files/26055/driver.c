#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)40839;
unsigned int var_11 = 3731279153U;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = -1441838636;
signed char var_15 = (signed char)124;
unsigned int var_16 = 544177499U;
unsigned int var_17 = 3987142060U;
unsigned int var_18 = 1415087605U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
