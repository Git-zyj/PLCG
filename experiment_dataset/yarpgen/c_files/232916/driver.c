#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9945;
short var_2 = (short)-8899;
signed char var_5 = (signed char)-7;
long long int var_11 = -9030651443086988301LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6548779910311354208LL;
void init() {
}

void checksum() {
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
