#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60606;
unsigned long long int var_3 = 8813294693839407758ULL;
short var_4 = (short)16880;
signed char var_5 = (signed char)62;
unsigned char var_6 = (unsigned char)232;
short var_9 = (short)-7457;
unsigned int var_10 = 69199863U;
int zero = 0;
unsigned short var_12 = (unsigned short)17280;
short var_13 = (short)-25293;
short var_14 = (short)-12877;
unsigned char var_15 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
