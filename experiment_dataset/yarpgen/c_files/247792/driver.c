#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_11 = -568148038;
unsigned short var_15 = (unsigned short)34635;
unsigned long long int var_18 = 15904743470246532047ULL;
int zero = 0;
long long int var_20 = -2606396040160755944LL;
unsigned long long int var_21 = 15381684881153342485ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
