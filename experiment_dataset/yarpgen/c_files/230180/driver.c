#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 361406812;
short var_1 = (short)21770;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)38320;
unsigned short var_7 = (unsigned short)10753;
unsigned int var_13 = 1389337950U;
_Bool var_14 = (_Bool)1;
unsigned int var_18 = 2407107786U;
int zero = 0;
int var_19 = 1575138505;
int var_20 = -1890435824;
void init() {
}

void checksum() {
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
