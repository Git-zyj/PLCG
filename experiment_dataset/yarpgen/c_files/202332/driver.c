#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2851353152724422290LL;
unsigned int var_1 = 1982185573U;
unsigned char var_2 = (unsigned char)53;
short var_3 = (short)10882;
int var_4 = -595303557;
int var_5 = 1503990970;
unsigned short var_6 = (unsigned short)3011;
unsigned int var_9 = 3825872669U;
int zero = 0;
unsigned long long int var_10 = 7235709511603373243ULL;
signed char var_11 = (signed char)-9;
long long int var_12 = 3041081356585107569LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
