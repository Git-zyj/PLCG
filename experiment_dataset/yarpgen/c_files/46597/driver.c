#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_12 = -682051259;
unsigned int var_13 = 1769513477U;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
int var_17 = -1331536418;
int var_18 = 712590327;
unsigned short var_19 = (unsigned short)34914;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
