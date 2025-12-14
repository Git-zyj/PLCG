#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9212470548135870151ULL;
unsigned int var_7 = 926039427U;
unsigned short var_9 = (unsigned short)55604;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)54320;
unsigned int var_15 = 3165634806U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
