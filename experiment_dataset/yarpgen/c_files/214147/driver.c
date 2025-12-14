#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1014360389U;
long long int var_7 = -7257449381953737137LL;
unsigned long long int var_9 = 7939467498081481154ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = 891119354946822752LL;
long long int var_16 = -2499973631456663812LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
