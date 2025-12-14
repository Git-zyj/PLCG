#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27160;
int var_2 = 706783979;
signed char var_5 = (signed char)112;
unsigned int var_6 = 1070197383U;
unsigned char var_8 = (unsigned char)255;
unsigned char var_9 = (unsigned char)104;
int var_10 = 1151096526;
int var_12 = 1366900833;
int zero = 0;
int var_14 = -33422612;
unsigned long long int var_15 = 8856000260701066526ULL;
unsigned int var_16 = 2939303664U;
unsigned int var_17 = 3188343767U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
