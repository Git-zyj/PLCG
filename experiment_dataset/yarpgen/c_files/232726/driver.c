#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -641318223;
unsigned short var_5 = (unsigned short)18565;
unsigned long long int var_7 = 3681574830392895382ULL;
unsigned int var_10 = 693451034U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1379732149;
void init() {
}

void checksum() {
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
