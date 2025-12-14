#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27793;
unsigned long long int var_4 = 7015059335599272119ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)103;
int var_8 = 1979457372;
int zero = 0;
long long int var_11 = -3482877873702673667LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)79;
unsigned short var_14 = (unsigned short)16163;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
