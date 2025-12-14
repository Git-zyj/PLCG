#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3261055509874141111LL;
unsigned int var_4 = 2951744441U;
unsigned char var_12 = (unsigned char)170;
unsigned int var_13 = 3339747407U;
int var_15 = -283170676;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1228112368;
unsigned short var_18 = (unsigned short)39161;
void init() {
}

void checksum() {
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
