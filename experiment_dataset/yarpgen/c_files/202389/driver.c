#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2183146858311611110LL;
signed char var_7 = (signed char)120;
unsigned char var_8 = (unsigned char)12;
long long int var_11 = -6943880560459548677LL;
short var_16 = (short)-2526;
int zero = 0;
signed char var_17 = (signed char)-25;
short var_18 = (short)28207;
short var_19 = (short)-17595;
unsigned char var_20 = (unsigned char)90;
int var_21 = -305851634;
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
