#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)708;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)38844;
unsigned long long int var_14 = 4249715032397151623ULL;
int zero = 0;
short var_19 = (short)-21803;
int var_20 = -796133640;
unsigned char var_21 = (unsigned char)63;
unsigned char var_22 = (unsigned char)249;
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
