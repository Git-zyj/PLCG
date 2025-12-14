#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
_Bool var_1 = (_Bool)0;
int var_2 = 821956851;
unsigned int var_3 = 674624715U;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)44873;
unsigned short var_12 = (unsigned short)22459;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
