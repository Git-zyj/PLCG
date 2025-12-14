#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
signed char var_3 = (signed char)73;
unsigned short var_4 = (unsigned short)19146;
signed char var_9 = (signed char)65;
unsigned long long int var_10 = 7320261735354305997ULL;
unsigned long long int var_11 = 2102107375311631417ULL;
unsigned char var_12 = (unsigned char)236;
long long int var_13 = 426151566361761199LL;
int var_15 = -1548629071;
unsigned int var_18 = 115948474U;
int zero = 0;
unsigned short var_20 = (unsigned short)62189;
unsigned long long int var_21 = 17820652935818515050ULL;
short var_22 = (short)-16009;
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
