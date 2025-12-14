#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1542443304;
unsigned int var_4 = 1174189135U;
long long int var_5 = -2546983554421728898LL;
int var_8 = 1618733529;
unsigned char var_11 = (unsigned char)138;
signed char var_14 = (signed char)43;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
