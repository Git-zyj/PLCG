#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 303253108;
int var_7 = 199143691;
signed char var_8 = (signed char)100;
unsigned long long int var_12 = 15633136613669094680ULL;
int var_14 = 585087761;
int var_16 = -1136269564;
int var_17 = 657475175;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
int var_20 = -1229588586;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
