#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)235;
unsigned char var_14 = (unsigned char)82;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1520923816759719429ULL;
int var_17 = 1422038599;
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
