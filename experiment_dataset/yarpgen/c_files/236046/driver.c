#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16878;
unsigned short var_7 = (unsigned short)40676;
short var_8 = (short)32640;
unsigned int var_10 = 1632922929U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-16605;
long long int var_15 = 2962674535399370475LL;
_Bool var_16 = (_Bool)0;
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
