#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)156;
unsigned char var_4 = (unsigned char)236;
unsigned short var_5 = (unsigned short)17873;
signed char var_7 = (signed char)-60;
unsigned int var_8 = 4260779468U;
unsigned char var_9 = (unsigned char)220;
unsigned short var_10 = (unsigned short)33829;
unsigned int var_12 = 585035056U;
unsigned short var_14 = (unsigned short)64763;
signed char var_16 = (signed char)-73;
unsigned short var_17 = (unsigned short)1273;
int zero = 0;
unsigned int var_18 = 3198051227U;
signed char var_19 = (signed char)111;
unsigned short var_20 = (unsigned short)28973;
unsigned short var_21 = (unsigned short)25251;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
