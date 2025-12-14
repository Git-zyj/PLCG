#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_11 = 928501650;
long long int var_13 = 8809105617305626871LL;
int zero = 0;
unsigned short var_14 = (unsigned short)3374;
unsigned long long int var_15 = 12179239707832168727ULL;
signed char var_16 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
