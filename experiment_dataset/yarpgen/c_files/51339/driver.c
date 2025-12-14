#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
short var_1 = (short)-26893;
short var_2 = (short)-27533;
short var_3 = (short)8048;
signed char var_7 = (signed char)-70;
unsigned int var_8 = 3386000189U;
short var_10 = (short)-13053;
signed char var_11 = (signed char)22;
signed char var_12 = (signed char)5;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
long long int var_15 = 7437251693514623359LL;
unsigned char var_16 = (unsigned char)238;
short var_17 = (short)-342;
unsigned char var_18 = (unsigned char)25;
short var_19 = (short)-21543;
void init() {
}

void checksum() {
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
