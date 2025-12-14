#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
short var_2 = (short)32419;
_Bool var_3 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2654265411U;
long long int var_19 = -7227095711618152739LL;
long long int var_20 = 3539939001046321632LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
