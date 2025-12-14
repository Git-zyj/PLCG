#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
long long int var_5 = 2593216696031136667LL;
unsigned char var_7 = (unsigned char)167;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4341579140586325545LL;
int var_14 = -1528492170;
int zero = 0;
short var_19 = (short)-23408;
unsigned short var_20 = (unsigned short)32625;
int var_21 = -463747042;
_Bool var_22 = (_Bool)1;
int var_23 = 220733365;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
