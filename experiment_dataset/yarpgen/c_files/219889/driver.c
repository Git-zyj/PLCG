#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24647;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_20 = (short)5131;
_Bool var_21 = (_Bool)1;
long long int var_22 = 5808973309162910245LL;
short var_23 = (short)20669;
short var_24 = (short)-18674;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
