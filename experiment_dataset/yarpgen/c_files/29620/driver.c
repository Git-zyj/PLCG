#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1744560315115069416ULL;
int var_15 = -410530887;
signed char var_17 = (signed char)-10;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 412682208469398300LL;
signed char var_21 = (signed char)75;
long long int var_22 = 6443247532708891297LL;
signed char var_23 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
