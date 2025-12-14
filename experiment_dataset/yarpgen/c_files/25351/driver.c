#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3915073879149668676LL;
int var_2 = -1536560243;
unsigned long long int var_3 = 17588348683736917390ULL;
signed char var_5 = (signed char)3;
_Bool var_7 = (_Bool)0;
int var_10 = 1579627694;
int zero = 0;
signed char var_13 = (signed char)67;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
