#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7867245952304293273ULL;
signed char var_5 = (signed char)36;
short var_6 = (short)16856;
unsigned long long int var_10 = 4216826898003321949ULL;
unsigned long long int var_11 = 12853313312772825788ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 224364315U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
