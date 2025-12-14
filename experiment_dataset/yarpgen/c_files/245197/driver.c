#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1867818134;
unsigned short var_3 = (unsigned short)15592;
long long int var_5 = 2935065396374457519LL;
long long int var_6 = -513328072292699339LL;
short var_8 = (short)-12934;
unsigned char var_13 = (unsigned char)122;
_Bool var_14 = (_Bool)0;
long long int var_17 = -4845106147673509774LL;
int zero = 0;
unsigned short var_19 = (unsigned short)31543;
short var_20 = (short)-15718;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1806950606U;
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
