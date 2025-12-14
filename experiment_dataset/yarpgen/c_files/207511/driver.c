#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3531920190U;
unsigned int var_3 = 2020018314U;
int var_5 = 1357827596;
signed char var_8 = (signed char)-74;
unsigned char var_11 = (unsigned char)160;
unsigned char var_13 = (unsigned char)247;
short var_14 = (short)8325;
int zero = 0;
unsigned char var_16 = (unsigned char)116;
unsigned int var_17 = 2005346292U;
short var_18 = (short)15835;
unsigned int var_19 = 3182098395U;
unsigned int var_20 = 1630207469U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
