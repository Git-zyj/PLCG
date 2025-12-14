#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1451597379;
short var_2 = (short)7085;
long long int var_3 = -3784056275551586449LL;
unsigned short var_4 = (unsigned short)30770;
unsigned int var_8 = 4093344199U;
short var_10 = (short)9510;
unsigned char var_14 = (unsigned char)180;
int var_15 = 887454698;
int zero = 0;
unsigned char var_16 = (unsigned char)62;
long long int var_17 = -5973813209070324067LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
