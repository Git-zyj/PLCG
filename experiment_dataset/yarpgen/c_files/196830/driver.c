#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23832;
long long int var_1 = 2943751417848213485LL;
signed char var_2 = (signed char)96;
unsigned long long int var_3 = 2110814595249134544ULL;
int var_4 = -1736934802;
unsigned short var_7 = (unsigned short)45806;
unsigned long long int var_8 = 17483564808794289431ULL;
unsigned short var_10 = (unsigned short)29813;
int zero = 0;
signed char var_17 = (signed char)79;
long long int var_18 = 3772272578141803461LL;
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
