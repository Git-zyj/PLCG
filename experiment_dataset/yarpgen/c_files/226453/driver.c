#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-11210;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 1657213862;
unsigned char var_16 = (unsigned char)216;
unsigned int var_17 = 3319543236U;
void init() {
}

void checksum() {
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
