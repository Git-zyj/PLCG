#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3130;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 12882822861667533031ULL;
unsigned char var_7 = (unsigned char)174;
short var_10 = (short)3517;
short var_17 = (short)9668;
int zero = 0;
long long int var_18 = -7792841891888014676LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
