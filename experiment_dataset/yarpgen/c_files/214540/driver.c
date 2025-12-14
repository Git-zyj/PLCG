#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned short var_2 = (unsigned short)12204;
unsigned int var_4 = 2652610957U;
short var_5 = (short)-19609;
unsigned char var_8 = (unsigned char)115;
signed char var_9 = (signed char)-30;
unsigned int var_10 = 4217606937U;
int zero = 0;
unsigned char var_11 = (unsigned char)85;
unsigned short var_12 = (unsigned short)25076;
int var_13 = -1629346871;
unsigned int var_14 = 4065365093U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
