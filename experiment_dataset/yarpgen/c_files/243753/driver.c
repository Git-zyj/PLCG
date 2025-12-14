#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2076649965U;
unsigned long long int var_10 = 18289099747704892616ULL;
long long int var_19 = -5152787083673891812LL;
int zero = 0;
int var_20 = 627383373;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)14209;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
