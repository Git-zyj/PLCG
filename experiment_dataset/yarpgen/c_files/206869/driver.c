#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1676122635U;
int var_2 = 694829905;
unsigned short var_5 = (unsigned short)64599;
unsigned char var_8 = (unsigned char)71;
unsigned char var_10 = (unsigned char)156;
short var_11 = (short)-29022;
unsigned long long int var_15 = 14154027224198772508ULL;
short var_16 = (short)7967;
unsigned long long int var_17 = 2543485260255772289ULL;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
unsigned long long int var_20 = 9610161512991243816ULL;
unsigned short var_21 = (unsigned short)7519;
unsigned int var_22 = 1746642671U;
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
