#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15287641372884606702ULL;
unsigned long long int var_2 = 15644937912989374390ULL;
signed char var_3 = (signed char)36;
unsigned int var_4 = 1505020570U;
unsigned char var_6 = (unsigned char)231;
int var_14 = -960383573;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-29283;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
