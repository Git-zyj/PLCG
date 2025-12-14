#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1323579867;
short var_5 = (short)-31116;
long long int var_8 = 4667490773807414572LL;
short var_9 = (short)23512;
signed char var_13 = (signed char)-4;
unsigned char var_14 = (unsigned char)88;
int zero = 0;
short var_16 = (short)-2123;
long long int var_17 = -5547459199249030939LL;
long long int var_18 = 406346385366053204LL;
long long int var_19 = -5525580618934244090LL;
int var_20 = -193805005;
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
