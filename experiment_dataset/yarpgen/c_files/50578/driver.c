#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13798615090717922120ULL;
signed char var_7 = (signed char)82;
unsigned long long int var_8 = 711394626011093586ULL;
int var_15 = 2104052715;
long long int var_16 = -6985716208321217903LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-91;
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
