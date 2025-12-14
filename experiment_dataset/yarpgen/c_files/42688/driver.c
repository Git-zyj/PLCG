#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26753;
unsigned short var_2 = (unsigned short)18973;
short var_4 = (short)-16537;
unsigned short var_6 = (unsigned short)31462;
unsigned short var_7 = (unsigned short)824;
unsigned int var_9 = 685150253U;
int zero = 0;
unsigned char var_12 = (unsigned char)151;
long long int var_13 = -5289812820878471768LL;
unsigned long long int var_14 = 15093481561862734992ULL;
signed char var_15 = (signed char)-104;
unsigned short var_16 = (unsigned short)62852;
signed char var_17 = (signed char)-61;
signed char var_18 = (signed char)61;
unsigned char var_19 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
