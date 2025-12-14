#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6686550314597525992ULL;
int var_3 = -1314691840;
long long int var_5 = 5988442767560311200LL;
unsigned char var_6 = (unsigned char)41;
unsigned long long int var_7 = 3798922886391251649ULL;
unsigned int var_9 = 542784537U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_15 = 8063258953450643549LL;
long long int var_16 = 186143495362392277LL;
unsigned long long int var_17 = 6828289548558295634ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
