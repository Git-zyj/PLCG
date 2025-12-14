#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2152355883U;
unsigned long long int var_2 = 9104852761702152708ULL;
unsigned long long int var_4 = 9034116700595735514ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1072762724U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
