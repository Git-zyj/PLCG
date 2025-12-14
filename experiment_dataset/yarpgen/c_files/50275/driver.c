#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 701849960U;
unsigned int var_6 = 2233505915U;
unsigned int var_7 = 3060876714U;
unsigned char var_9 = (unsigned char)115;
unsigned short var_12 = (unsigned short)8784;
unsigned char var_14 = (unsigned char)15;
int zero = 0;
long long int var_16 = -5728900740119933780LL;
unsigned char var_17 = (unsigned char)60;
signed char var_18 = (signed char)47;
short var_19 = (short)12181;
signed char var_20 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
