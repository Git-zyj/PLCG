#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5766739982375171496LL;
short var_4 = (short)-1323;
unsigned short var_7 = (unsigned short)48396;
unsigned short var_9 = (unsigned short)2545;
short var_12 = (short)-8028;
unsigned long long int var_14 = 482589536437463096ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)50740;
unsigned char var_19 = (unsigned char)39;
_Bool var_20 = (_Bool)0;
short var_21 = (short)8400;
long long int var_22 = -397827524904732501LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
