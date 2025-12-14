#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11487;
long long int var_1 = 3589474108686781492LL;
signed char var_2 = (signed char)8;
signed char var_4 = (signed char)18;
short var_7 = (short)2059;
short var_8 = (short)13031;
int var_12 = -1821840467;
unsigned char var_13 = (unsigned char)30;
unsigned short var_14 = (unsigned short)21528;
int zero = 0;
short var_15 = (short)28248;
int var_16 = -160959024;
short var_17 = (short)16217;
short var_18 = (short)-8175;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
