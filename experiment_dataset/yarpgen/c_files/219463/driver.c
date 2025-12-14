#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35237;
signed char var_3 = (signed char)-112;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3121343489754839434LL;
unsigned int var_9 = 2187688569U;
unsigned short var_10 = (unsigned short)41322;
unsigned short var_12 = (unsigned short)54212;
unsigned short var_15 = (unsigned short)6066;
unsigned char var_16 = (unsigned char)27;
int var_17 = 1181607247;
int zero = 0;
short var_18 = (short)15400;
unsigned short var_19 = (unsigned short)43800;
short var_20 = (short)-12473;
long long int var_21 = 2076995790220090059LL;
void init() {
}

void checksum() {
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
