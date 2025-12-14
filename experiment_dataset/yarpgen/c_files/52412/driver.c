#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 9177515453393083572ULL;
unsigned long long int var_13 = 16855971752396458280ULL;
signed char var_14 = (signed char)-105;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)13224;
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
