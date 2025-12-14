#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13022548551952080782ULL;
unsigned short var_6 = (unsigned short)43277;
unsigned short var_13 = (unsigned short)28786;
int zero = 0;
signed char var_17 = (signed char)0;
short var_18 = (short)32188;
unsigned long long int var_19 = 4699723330752308755ULL;
unsigned long long int var_20 = 14913894177018897162ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
