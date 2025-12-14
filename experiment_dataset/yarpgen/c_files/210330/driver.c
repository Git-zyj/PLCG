#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
unsigned short var_2 = (unsigned short)61947;
int var_3 = -354243103;
long long int var_7 = -2852070031220980641LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)6807;
_Bool var_11 = (_Bool)1;
long long int var_16 = 7780036448231468636LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)40876;
unsigned long long int var_19 = 9603317943135601757ULL;
void init() {
}

void checksum() {
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
