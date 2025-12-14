#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3447265892153540335LL;
short var_5 = (short)29400;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)54015;
short var_10 = (short)14278;
int zero = 0;
unsigned int var_12 = 392950674U;
int var_13 = -312418098;
long long int var_14 = -5450808887659715062LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
