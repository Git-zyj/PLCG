#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_10 = 3304061887U;
unsigned short var_12 = (unsigned short)5536;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2522402817461906133LL;
int var_18 = 388187655;
unsigned int var_19 = 3835414165U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
