#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)8;
unsigned char var_6 = (unsigned char)136;
unsigned char var_7 = (unsigned char)148;
unsigned char var_8 = (unsigned char)188;
unsigned short var_9 = (unsigned short)61844;
unsigned short var_11 = (unsigned short)43735;
short var_12 = (short)-19687;
short var_13 = (short)27190;
short var_14 = (short)26937;
unsigned char var_15 = (unsigned char)171;
unsigned char var_16 = (unsigned char)9;
int zero = 0;
unsigned short var_17 = (unsigned short)58813;
unsigned char var_18 = (unsigned char)1;
unsigned char var_19 = (unsigned char)163;
unsigned char var_20 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
