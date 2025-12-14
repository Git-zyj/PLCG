#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17730;
signed char var_3 = (signed char)75;
signed char var_4 = (signed char)120;
_Bool var_5 = (_Bool)1;
int zero = 0;
int var_11 = -779719166;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15301975369129608823ULL;
unsigned long long int var_14 = 18049269552080715665ULL;
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
