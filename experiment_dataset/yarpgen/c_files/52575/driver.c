#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned char var_1 = (unsigned char)250;
short var_2 = (short)29251;
signed char var_3 = (signed char)97;
unsigned short var_4 = (unsigned short)6910;
unsigned char var_6 = (unsigned char)219;
short var_7 = (short)18972;
unsigned short var_10 = (unsigned short)11512;
unsigned short var_15 = (unsigned short)29854;
short var_18 = (short)-12211;
int zero = 0;
long long int var_20 = -977104796787062772LL;
unsigned long long int var_21 = 7045378002032890753ULL;
int var_22 = 1297203091;
unsigned char var_23 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
