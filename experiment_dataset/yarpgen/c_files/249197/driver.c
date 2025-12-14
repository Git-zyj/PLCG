#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4332512566359940620LL;
int var_4 = -240658829;
int var_5 = -679278303;
short var_6 = (short)-29790;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2427351457U;
int var_13 = 2119104706;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
