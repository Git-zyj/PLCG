#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2354945547U;
unsigned long long int var_11 = 887937543535699990ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3713430567U;
unsigned char var_19 = (unsigned char)51;
short var_20 = (short)27323;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
