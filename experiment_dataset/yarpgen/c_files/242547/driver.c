#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 66591070U;
unsigned short var_5 = (unsigned short)489;
unsigned short var_6 = (unsigned short)17579;
unsigned short var_7 = (unsigned short)11524;
short var_8 = (short)7173;
unsigned int var_9 = 3370993477U;
signed char var_10 = (signed char)93;
unsigned short var_12 = (unsigned short)62330;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -132961720055922049LL;
long long int var_15 = 1212252236606596101LL;
long long int var_16 = -310662412957824929LL;
void init() {
}

void checksum() {
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
