#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -239535018452008325LL;
unsigned char var_2 = (unsigned char)42;
unsigned short var_4 = (unsigned short)24123;
signed char var_5 = (signed char)-21;
unsigned char var_7 = (unsigned char)190;
unsigned long long int var_8 = 11938854679668213274ULL;
int var_9 = -1408617915;
short var_10 = (short)5267;
int zero = 0;
short var_12 = (short)-23489;
long long int var_13 = 5070779996655169061LL;
unsigned int var_14 = 1837351345U;
short var_15 = (short)-472;
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
