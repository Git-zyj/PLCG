#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2403041243433012009LL;
unsigned long long int var_8 = 1169118111455460343ULL;
int zero = 0;
int var_10 = -665248208;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3227192813189976790ULL;
long long int var_13 = 7194384932786589756LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
