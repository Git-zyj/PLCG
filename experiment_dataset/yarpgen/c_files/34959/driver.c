#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
signed char var_8 = (signed char)122;
unsigned short var_9 = (unsigned short)48609;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-31310;
signed char var_14 = (signed char)87;
signed char var_15 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
