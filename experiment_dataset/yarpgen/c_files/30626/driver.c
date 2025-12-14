#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-9;
short var_5 = (short)-20307;
unsigned char var_10 = (unsigned char)164;
short var_11 = (short)28682;
short var_12 = (short)-4140;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = -1018422020874348711LL;
unsigned int var_18 = 2712925268U;
unsigned char var_19 = (unsigned char)123;
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
