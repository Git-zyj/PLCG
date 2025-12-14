#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6918432918473263516LL;
long long int var_1 = 4900155306429875427LL;
short var_2 = (short)-13217;
unsigned short var_4 = (unsigned short)55221;
short var_5 = (short)31212;
int var_6 = 341260098;
short var_7 = (short)-18472;
unsigned short var_8 = (unsigned short)25945;
unsigned char var_9 = (unsigned char)142;
unsigned short var_11 = (unsigned short)27270;
long long int var_12 = -5953177194379437625LL;
int zero = 0;
unsigned short var_13 = (unsigned short)52400;
int var_14 = 624933281;
short var_15 = (short)2202;
int var_16 = 2095817485;
unsigned short var_17 = (unsigned short)48103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
