#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1656079487;
int var_4 = 21592315;
short var_6 = (short)-17079;
int var_7 = -408218009;
_Bool var_8 = (_Bool)0;
long long int var_9 = 4237828363428477459LL;
unsigned short var_11 = (unsigned short)56095;
int zero = 0;
unsigned char var_12 = (unsigned char)171;
int var_13 = -1545598241;
int var_14 = -605289595;
unsigned char var_15 = (unsigned char)124;
long long int var_16 = 1007962804360489125LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
