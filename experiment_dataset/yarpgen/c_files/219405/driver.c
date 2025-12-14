#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16932;
short var_1 = (short)-10604;
unsigned short var_6 = (unsigned short)100;
signed char var_9 = (signed char)-3;
unsigned long long int var_11 = 12697975982892269018ULL;
unsigned long long int var_12 = 16482861357895063763ULL;
long long int var_13 = -99859494025134634LL;
int zero = 0;
unsigned char var_14 = (unsigned char)94;
unsigned int var_15 = 2483685522U;
unsigned int var_16 = 373956665U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
