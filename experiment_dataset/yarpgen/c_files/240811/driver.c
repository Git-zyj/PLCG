#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)16503;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_18 = (short)-5550;
int var_19 = -318701331;
signed char var_20 = (signed char)-108;
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
