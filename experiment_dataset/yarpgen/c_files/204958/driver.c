#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1114174498;
short var_1 = (short)8915;
short var_4 = (short)1175;
short var_7 = (short)13105;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_13 = (short)23294;
unsigned char var_14 = (unsigned char)141;
unsigned int var_15 = 318067539U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
