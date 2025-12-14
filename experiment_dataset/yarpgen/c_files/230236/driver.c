#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
short var_4 = (short)15955;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 8962443070203612967ULL;
long long int var_12 = 103341633928095214LL;
unsigned long long int var_13 = 16786466567619595927ULL;
void init() {
}

void checksum() {
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
