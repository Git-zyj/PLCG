#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)111;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-41;
signed char var_6 = (signed char)64;
unsigned short var_8 = (unsigned short)59381;
short var_9 = (short)-23324;
unsigned char var_10 = (unsigned char)209;
short var_13 = (short)19440;
int zero = 0;
long long int var_15 = 6274849916745606494LL;
short var_16 = (short)-23042;
unsigned char var_17 = (unsigned char)136;
int var_18 = 275566720;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
