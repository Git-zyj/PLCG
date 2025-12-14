#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29119;
_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_8 = 1492269252;
unsigned char var_10 = (unsigned char)32;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 12259178869222422753ULL;
unsigned long long int var_14 = 3574643170320213158ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
