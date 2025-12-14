#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3647193192649308637ULL;
unsigned long long int var_1 = 2094016663810044767ULL;
unsigned long long int var_3 = 6336004590825402151ULL;
short var_4 = (short)-25891;
unsigned long long int var_10 = 10615843152258319473ULL;
int var_12 = -1570210782;
_Bool var_13 = (_Bool)0;
short var_18 = (short)2636;
int zero = 0;
signed char var_19 = (signed char)-93;
signed char var_20 = (signed char)0;
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
