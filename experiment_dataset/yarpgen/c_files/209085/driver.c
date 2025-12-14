#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64984;
unsigned char var_2 = (unsigned char)144;
short var_3 = (short)30474;
unsigned char var_5 = (unsigned char)181;
short var_7 = (short)10842;
short var_8 = (short)-17859;
unsigned long long int var_9 = 1482478407307209877ULL;
unsigned long long int var_11 = 16684202799351630267ULL;
short var_12 = (short)-26975;
unsigned char var_13 = (unsigned char)34;
short var_14 = (short)15780;
unsigned short var_15 = (unsigned short)44094;
int zero = 0;
unsigned long long int var_16 = 338846587224685459ULL;
unsigned char var_17 = (unsigned char)221;
unsigned char var_18 = (unsigned char)68;
void init() {
}

void checksum() {
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
