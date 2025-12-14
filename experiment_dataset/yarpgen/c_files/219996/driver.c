#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned short var_1 = (unsigned short)19017;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-73;
unsigned long long int var_4 = 10144621692675586814ULL;
unsigned int var_5 = 3482446302U;
short var_6 = (short)13198;
unsigned short var_7 = (unsigned short)18156;
unsigned int var_9 = 222950695U;
long long int var_12 = -7888797878407256716LL;
short var_13 = (short)18477;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)65;
long long int var_17 = 2457736418064681360LL;
short var_18 = (short)-30948;
unsigned short var_19 = (unsigned short)36314;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
