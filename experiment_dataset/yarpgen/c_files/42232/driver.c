#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6143882943927135417ULL;
long long int var_1 = 3724676837280033032LL;
unsigned short var_2 = (unsigned short)17065;
long long int var_3 = -3778341688999777714LL;
_Bool var_4 = (_Bool)1;
int var_8 = -224619811;
int zero = 0;
signed char var_10 = (signed char)-115;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4487808925459852904ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
