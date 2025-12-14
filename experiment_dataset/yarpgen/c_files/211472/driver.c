#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25097;
unsigned char var_6 = (unsigned char)85;
short var_7 = (short)-12306;
unsigned char var_13 = (unsigned char)182;
unsigned int var_18 = 4059651388U;
int zero = 0;
short var_19 = (short)-21100;
signed char var_20 = (signed char)114;
unsigned int var_21 = 1385269943U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
