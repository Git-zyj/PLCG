#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1845441676;
unsigned char var_6 = (unsigned char)230;
int var_9 = 367519944;
int var_11 = 609218183;
long long int var_13 = 2258167129249014924LL;
int var_14 = -2125374755;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)34317;
unsigned short var_20 = (unsigned short)18511;
short var_21 = (short)-744;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
