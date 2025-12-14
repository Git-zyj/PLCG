#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1256172985;
signed char var_3 = (signed char)79;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2373143883U;
unsigned char var_6 = (unsigned char)160;
unsigned int var_7 = 865289757U;
unsigned short var_9 = (unsigned short)27081;
unsigned char var_10 = (unsigned char)90;
int zero = 0;
unsigned short var_11 = (unsigned short)25293;
int var_12 = -1288626557;
unsigned char var_13 = (unsigned char)143;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-1135;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
