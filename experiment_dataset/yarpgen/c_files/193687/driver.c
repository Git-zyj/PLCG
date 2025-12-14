#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4261987036052257681LL;
unsigned long long int var_3 = 3889805194655578969ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3373291793U;
long long int var_7 = -6341076547778191721LL;
unsigned short var_9 = (unsigned short)14507;
int var_10 = -25923028;
unsigned short var_11 = (unsigned short)4729;
int zero = 0;
unsigned long long int var_17 = 17426885350189410966ULL;
unsigned short var_18 = (unsigned short)45877;
unsigned char var_19 = (unsigned char)178;
long long int var_20 = 4956472003766988428LL;
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
