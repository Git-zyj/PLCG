#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7502;
unsigned short var_8 = (unsigned short)38688;
_Bool var_11 = (_Bool)0;
short var_16 = (short)9844;
int zero = 0;
long long int var_19 = 3724576236279195154LL;
short var_20 = (short)22314;
int var_21 = 182333506;
unsigned int var_22 = 29476740U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
