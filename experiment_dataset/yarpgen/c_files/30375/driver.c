#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1420040505U;
_Bool var_2 = (_Bool)1;
int var_11 = -1377461028;
long long int var_12 = 5242193418669595642LL;
unsigned char var_16 = (unsigned char)137;
unsigned char var_17 = (unsigned char)48;
int zero = 0;
long long int var_19 = 42507737478734250LL;
short var_20 = (short)25772;
short var_21 = (short)-5650;
short var_22 = (short)28036;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
