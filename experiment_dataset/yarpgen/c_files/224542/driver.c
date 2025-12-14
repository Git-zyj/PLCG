#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14032035791361989868ULL;
long long int var_10 = 7065441070551320554LL;
signed char var_12 = (signed char)-85;
_Bool var_13 = (_Bool)1;
int var_16 = -1515582373;
int var_17 = -241452898;
int zero = 0;
short var_19 = (short)-8821;
int var_20 = 1803157532;
int var_21 = -1769424187;
unsigned char var_22 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
