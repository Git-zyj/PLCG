#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)888;
short var_5 = (short)32068;
unsigned long long int var_10 = 18410317759728358325ULL;
unsigned int var_11 = 1717546004U;
short var_12 = (short)-14710;
unsigned short var_17 = (unsigned short)61508;
int zero = 0;
unsigned long long int var_19 = 15408423287010243975ULL;
unsigned int var_20 = 4203366970U;
short var_21 = (short)-4792;
unsigned int var_22 = 1916887729U;
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
