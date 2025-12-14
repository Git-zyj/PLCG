#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)27;
unsigned char var_7 = (unsigned char)27;
unsigned char var_11 = (unsigned char)114;
signed char var_12 = (signed char)-114;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
unsigned short var_14 = (unsigned short)32862;
int var_15 = 921609495;
unsigned char var_16 = (unsigned char)12;
short var_17 = (short)-2238;
void init() {
}

void checksum() {
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
