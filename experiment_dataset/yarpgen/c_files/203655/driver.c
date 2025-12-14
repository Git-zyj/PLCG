#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64572;
unsigned short var_2 = (unsigned short)45834;
unsigned char var_3 = (unsigned char)92;
unsigned short var_4 = (unsigned short)26232;
unsigned int var_7 = 1181711820U;
long long int var_12 = -4795162827627978332LL;
int zero = 0;
short var_13 = (short)24434;
short var_14 = (short)30361;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
