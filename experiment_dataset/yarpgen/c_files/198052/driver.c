#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5837;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)19504;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)38404;
short var_7 = (short)-32017;
unsigned short var_9 = (unsigned short)4550;
int zero = 0;
unsigned short var_10 = (unsigned short)6267;
short var_11 = (short)-31263;
short var_12 = (short)-16974;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
