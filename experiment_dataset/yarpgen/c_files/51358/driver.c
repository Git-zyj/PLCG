#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17784286026158874022ULL;
short var_10 = (short)-30691;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6072622291976951824LL;
unsigned long long int var_22 = 1666763807955065778ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
