#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7587421543347099673LL;
long long int var_5 = -295007926703980770LL;
signed char var_6 = (signed char)-79;
unsigned long long int var_8 = 18289739499407522849ULL;
unsigned long long int var_10 = 209826582635193460ULL;
int zero = 0;
unsigned long long int var_15 = 1281456187268176919ULL;
long long int var_16 = -1948277163643648213LL;
long long int var_17 = 4187995365190771770LL;
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
