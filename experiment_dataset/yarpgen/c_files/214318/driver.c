#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8378;
unsigned char var_2 = (unsigned char)150;
short var_5 = (short)-9419;
unsigned short var_8 = (unsigned short)9548;
long long int var_12 = -8968749827974433603LL;
_Bool var_15 = (_Bool)1;
long long int var_17 = 8723098339788933788LL;
int zero = 0;
unsigned char var_18 = (unsigned char)202;
unsigned short var_19 = (unsigned short)28113;
long long int var_20 = -5903290887655890924LL;
void init() {
}

void checksum() {
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
