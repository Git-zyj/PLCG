#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)3830;
signed char var_9 = (signed char)-3;
unsigned short var_11 = (unsigned short)27197;
short var_13 = (short)-21693;
unsigned short var_14 = (unsigned short)12066;
unsigned char var_16 = (unsigned char)215;
signed char var_17 = (signed char)0;
int zero = 0;
unsigned long long int var_20 = 6320476999951941532ULL;
unsigned short var_21 = (unsigned short)4183;
unsigned int var_22 = 417596742U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
