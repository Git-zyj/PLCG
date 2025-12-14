#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31410;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)113;
short var_19 = (short)19509;
int zero = 0;
short var_20 = (short)27642;
unsigned char var_21 = (unsigned char)28;
unsigned short var_22 = (unsigned short)10746;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
