#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46257;
_Bool var_1 = (_Bool)1;
int var_2 = -352018358;
unsigned int var_4 = 4165668673U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-16722;
signed char var_19 = (signed char)72;
int zero = 0;
long long int var_20 = 5789636755499552637LL;
signed char var_21 = (signed char)76;
unsigned char var_22 = (unsigned char)105;
unsigned short var_23 = (unsigned short)21053;
void init() {
}

void checksum() {
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
