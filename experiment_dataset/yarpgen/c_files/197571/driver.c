#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35392;
signed char var_6 = (signed char)-48;
signed char var_9 = (signed char)17;
int var_12 = -1960810666;
short var_13 = (short)-5864;
unsigned char var_14 = (unsigned char)90;
int zero = 0;
long long int var_17 = 7574227818839708744LL;
unsigned int var_18 = 4079238208U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
