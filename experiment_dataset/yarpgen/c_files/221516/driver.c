#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
int var_3 = 1521984653;
unsigned int var_4 = 3782644845U;
signed char var_5 = (signed char)33;
short var_6 = (short)-28784;
short var_10 = (short)-21181;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-126;
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
