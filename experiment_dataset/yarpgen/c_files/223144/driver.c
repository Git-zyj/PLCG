#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39391;
int var_2 = -2027481722;
signed char var_6 = (signed char)-50;
unsigned char var_12 = (unsigned char)163;
unsigned short var_13 = (unsigned short)4204;
short var_14 = (short)-3633;
unsigned int var_15 = 3858990320U;
int zero = 0;
int var_16 = -1699309150;
unsigned short var_17 = (unsigned short)30789;
int var_18 = 1130972181;
unsigned char var_19 = (unsigned char)195;
void init() {
}

void checksum() {
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
