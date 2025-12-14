#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11587755673539160165ULL;
int var_2 = 1333030077;
unsigned long long int var_5 = 17911677011294181988ULL;
unsigned long long int var_10 = 13396945910285925836ULL;
unsigned long long int var_11 = 6872783593574938039ULL;
int zero = 0;
long long int var_15 = -7728593801314780554LL;
unsigned long long int var_16 = 5270818124025895871ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
