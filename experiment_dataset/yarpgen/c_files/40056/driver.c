#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = -3771768013764349131LL;
long long int var_12 = -5405388821384090706LL;
long long int var_15 = 1274100275033225524LL;
int zero = 0;
unsigned long long int var_19 = 3486328595165998444ULL;
unsigned int var_20 = 1692848492U;
signed char var_21 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
