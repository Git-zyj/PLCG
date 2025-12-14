#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)21609;
int zero = 0;
long long int var_13 = 1698925774738982107LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7896053286736028177LL;
long long int var_16 = 8135867527549200348LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
