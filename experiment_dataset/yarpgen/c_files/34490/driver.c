#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7984892122393716524LL;
unsigned long long int var_10 = 16205462699002978643ULL;
unsigned int var_12 = 3333285308U;
signed char var_16 = (signed char)116;
int zero = 0;
unsigned int var_20 = 1107741917U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
