#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)19544;
signed char var_4 = (signed char)72;
long long int var_6 = 8044729469835519191LL;
short var_7 = (short)18407;
unsigned char var_8 = (unsigned char)27;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-31985;
signed char var_13 = (signed char)122;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-24240;
unsigned char var_20 = (unsigned char)154;
unsigned int var_21 = 4016176069U;
short var_22 = (short)12883;
signed char var_23 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
