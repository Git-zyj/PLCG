#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)27761;
unsigned short var_5 = (unsigned short)27045;
unsigned int var_6 = 2876716571U;
short var_8 = (short)32178;
unsigned char var_10 = (unsigned char)14;
short var_13 = (short)31327;
int zero = 0;
short var_14 = (short)14385;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
