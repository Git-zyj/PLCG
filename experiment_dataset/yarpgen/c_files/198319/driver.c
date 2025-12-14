#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2027240317;
signed char var_1 = (signed char)7;
unsigned int var_3 = 819538059U;
signed char var_5 = (signed char)-30;
int var_6 = 1160827756;
unsigned short var_8 = (unsigned short)39816;
unsigned char var_9 = (unsigned char)51;
signed char var_11 = (signed char)-79;
int zero = 0;
unsigned int var_12 = 2019710371U;
int var_13 = -2095161134;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
