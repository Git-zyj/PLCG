#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62095;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)22434;
short var_9 = (short)-28653;
unsigned short var_13 = (unsigned short)24756;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)10964;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
