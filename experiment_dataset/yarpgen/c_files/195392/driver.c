#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned int var_12 = 1632604375U;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)84;
int zero = 0;
short var_18 = (short)24503;
unsigned short var_19 = (unsigned short)44749;
signed char var_20 = (signed char)-39;
unsigned char var_21 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
