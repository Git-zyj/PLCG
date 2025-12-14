#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3052111237U;
unsigned char var_7 = (unsigned char)116;
long long int var_8 = -6229282224978946353LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)57;
unsigned char var_17 = (unsigned char)134;
void init() {
}

void checksum() {
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
