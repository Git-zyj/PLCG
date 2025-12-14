#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1681;
long long int var_3 = -2515761327358566393LL;
int var_6 = 2120844127;
unsigned int var_7 = 3416251876U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 9962352606044414555ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)58696;
unsigned short var_15 = (unsigned short)32767;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
