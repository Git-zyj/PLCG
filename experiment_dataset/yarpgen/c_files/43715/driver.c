#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-62;
unsigned long long int var_8 = 6965751758130278317ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -3571713811692764726LL;
long long int var_16 = -9113611464439220912LL;
short var_17 = (short)29006;
long long int var_18 = 3547676405923492172LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
