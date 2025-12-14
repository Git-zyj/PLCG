#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -701736144875098099LL;
signed char var_16 = (signed char)17;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8522556663153525373ULL;
short var_19 = (short)29945;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
