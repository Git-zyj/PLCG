#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 498732109U;
signed char var_2 = (signed char)20;
unsigned short var_4 = (unsigned short)43574;
int var_6 = -1799665776;
int var_7 = -118029040;
long long int var_8 = 4713655798977722275LL;
unsigned int var_14 = 568961074U;
int zero = 0;
signed char var_20 = (signed char)-63;
short var_21 = (short)-15192;
int var_22 = 526515432;
int var_23 = -1808299513;
unsigned char var_24 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
