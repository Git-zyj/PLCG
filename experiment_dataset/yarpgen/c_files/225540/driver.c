#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24943;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-30;
signed char var_8 = (signed char)-66;
short var_11 = (short)16337;
long long int var_13 = -8045977627075236871LL;
unsigned short var_14 = (unsigned short)4518;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
int var_17 = 146633507;
short var_18 = (short)-5642;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
