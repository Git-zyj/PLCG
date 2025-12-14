#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2378748700U;
signed char var_12 = (signed char)17;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_18 = (short)-3458;
unsigned short var_19 = (unsigned short)36708;
unsigned int var_20 = 1637155005U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
