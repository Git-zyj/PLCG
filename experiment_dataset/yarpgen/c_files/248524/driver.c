#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1121308195;
int var_3 = -118338261;
signed char var_5 = (signed char)9;
unsigned long long int var_6 = 13164382295619687174ULL;
int var_7 = 1777230982;
unsigned short var_8 = (unsigned short)5652;
int var_9 = -1682774038;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)151;
unsigned short var_13 = (unsigned short)20636;
unsigned short var_14 = (unsigned short)737;
short var_15 = (short)14085;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
