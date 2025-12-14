#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7962038103368302783LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 8891250657665840770ULL;
long long int var_14 = 7566583253756328301LL;
long long int var_16 = 8589077044070859517LL;
int zero = 0;
long long int var_17 = -5079288679792655564LL;
int var_18 = 410816193;
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
