#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1172219797862036069LL;
long long int var_2 = 3961665692857260148LL;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)63823;
int zero = 0;
unsigned int var_17 = 2017584110U;
unsigned long long int var_18 = 6726133221126220392ULL;
_Bool var_19 = (_Bool)0;
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
