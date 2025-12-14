#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
int var_1 = -637430793;
signed char var_2 = (signed char)19;
short var_3 = (short)-4671;
short var_4 = (short)28598;
unsigned short var_5 = (unsigned short)6128;
short var_6 = (short)8441;
short var_7 = (short)-15479;
unsigned short var_9 = (unsigned short)18918;
int var_10 = -178530157;
int var_11 = -1535826838;
int zero = 0;
int var_13 = 1088802982;
int var_14 = 1655106813;
long long int var_15 = -8374469377869395559LL;
short var_16 = (short)-8197;
short var_17 = (short)29119;
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
