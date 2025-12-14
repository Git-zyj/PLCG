#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)65438;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3583740338555437524ULL;
unsigned long long int var_13 = 1931440158639104125ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)101;
unsigned long long int var_18 = 13012201256402516968ULL;
short var_19 = (short)27176;
long long int var_20 = 847608980846557224LL;
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
