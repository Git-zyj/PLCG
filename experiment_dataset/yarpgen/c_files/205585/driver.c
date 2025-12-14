#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18117931287176715745ULL;
unsigned long long int var_4 = 8393786440958148340ULL;
unsigned short var_6 = (unsigned short)64585;
signed char var_10 = (signed char)93;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)1;
signed char var_14 = (signed char)107;
int zero = 0;
int var_16 = -1394182734;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
