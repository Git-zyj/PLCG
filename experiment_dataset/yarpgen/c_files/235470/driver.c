#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
long long int var_4 = 5893240338248611160LL;
unsigned short var_5 = (unsigned short)59104;
unsigned short var_6 = (unsigned short)24284;
long long int var_10 = -1972543347804941345LL;
short var_12 = (short)-10313;
int zero = 0;
unsigned long long int var_15 = 3004707624630985245ULL;
unsigned int var_16 = 85694109U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
