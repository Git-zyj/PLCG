#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
long long int var_4 = -6462015100079237855LL;
unsigned char var_9 = (unsigned char)191;
unsigned long long int var_10 = 15730601437070023380ULL;
int var_11 = 1448480863;
int var_16 = 1330374374;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
signed char var_18 = (signed char)55;
int var_19 = 2128423335;
long long int var_20 = -6301598416635528340LL;
short var_21 = (short)-2453;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
