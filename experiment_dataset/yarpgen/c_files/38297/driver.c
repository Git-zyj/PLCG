#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 506326173570523716ULL;
unsigned long long int var_3 = 2861387555056319477ULL;
short var_6 = (short)-13748;
short var_10 = (short)26353;
int zero = 0;
short var_13 = (short)24355;
unsigned char var_14 = (unsigned char)241;
unsigned char var_15 = (unsigned char)209;
unsigned int var_16 = 3300692653U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
