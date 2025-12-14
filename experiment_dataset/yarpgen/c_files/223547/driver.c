#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)174;
unsigned int var_5 = 2395544291U;
unsigned long long int var_7 = 18292556347649306381ULL;
short var_9 = (short)-28617;
unsigned char var_10 = (unsigned char)66;
unsigned char var_13 = (unsigned char)102;
int zero = 0;
unsigned short var_15 = (unsigned short)46003;
unsigned long long int var_16 = 7738042237222986053ULL;
int var_17 = -764594783;
signed char var_18 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
