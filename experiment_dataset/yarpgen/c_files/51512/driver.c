#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24900;
unsigned short var_5 = (unsigned short)36987;
int zero = 0;
short var_13 = (short)9403;
_Bool var_14 = (_Bool)0;
short var_15 = (short)625;
unsigned short var_16 = (unsigned short)48225;
long long int var_17 = -7353052673334716833LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
