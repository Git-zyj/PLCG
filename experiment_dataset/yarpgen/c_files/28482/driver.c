#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2549579874U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 6543467068312732883ULL;
unsigned long long int var_18 = 7042492774514327659ULL;
unsigned short var_19 = (unsigned short)33660;
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
