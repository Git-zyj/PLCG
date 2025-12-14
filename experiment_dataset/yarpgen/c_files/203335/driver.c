#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 880417358U;
short var_1 = (short)29991;
int var_2 = -729326212;
short var_3 = (short)8102;
int var_4 = 1855019865;
short var_6 = (short)-2012;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)98;
unsigned char var_11 = (unsigned char)226;
long long int var_12 = -5331436613897888837LL;
short var_13 = (short)-12970;
int zero = 0;
int var_15 = 1900187606;
unsigned char var_16 = (unsigned char)147;
short var_17 = (short)23408;
unsigned char var_18 = (unsigned char)227;
short var_19 = (short)-16954;
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
