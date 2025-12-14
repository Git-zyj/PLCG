#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4481688218836529354ULL;
signed char var_5 = (signed char)-86;
unsigned int var_6 = 3823293053U;
unsigned short var_7 = (unsigned short)3259;
unsigned int var_8 = 1304527865U;
long long int var_9 = 8988810906622071913LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_16 = -1347731092;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
