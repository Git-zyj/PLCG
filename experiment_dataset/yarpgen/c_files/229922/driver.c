#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9222517607167378000ULL;
unsigned int var_6 = 549711663U;
unsigned long long int var_7 = 16812686372296198920ULL;
long long int var_8 = 2823708874165960318LL;
unsigned int var_9 = 586792195U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7165824967192510330ULL;
void init() {
}

void checksum() {
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
