#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)14452;
short var_3 = (short)832;
unsigned short var_5 = (unsigned short)40164;
unsigned short var_6 = (unsigned short)51944;
int var_7 = 948648732;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-63;
unsigned short var_11 = (unsigned short)34331;
int zero = 0;
unsigned short var_13 = (unsigned short)53001;
unsigned short var_14 = (unsigned short)6658;
unsigned short var_15 = (unsigned short)57823;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
