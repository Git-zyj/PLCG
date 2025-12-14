#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7615512433061433384ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 4191607027U;
unsigned long long int var_11 = 11863905297301882614ULL;
long long int var_12 = -7547005838623245309LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
