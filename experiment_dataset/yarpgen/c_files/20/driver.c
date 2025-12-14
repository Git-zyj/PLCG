#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
short var_2 = (short)27880;
unsigned char var_3 = (unsigned char)40;
unsigned char var_6 = (unsigned char)220;
long long int var_10 = -3311207545112566858LL;
unsigned char var_12 = (unsigned char)240;
unsigned int var_14 = 1079106116U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)9809;
int zero = 0;
signed char var_20 = (signed char)37;
long long int var_21 = 3855644287087922394LL;
short var_22 = (short)-6978;
unsigned short var_23 = (unsigned short)4739;
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
