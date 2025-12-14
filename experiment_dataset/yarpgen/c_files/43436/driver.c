#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned short var_1 = (unsigned short)12578;
unsigned short var_2 = (unsigned short)33520;
signed char var_5 = (signed char)-20;
unsigned long long int var_9 = 16232475866696593664ULL;
signed char var_11 = (signed char)65;
unsigned short var_12 = (unsigned short)63033;
unsigned char var_13 = (unsigned char)160;
signed char var_14 = (signed char)-87;
unsigned long long int var_16 = 12867049600873393619ULL;
int zero = 0;
int var_17 = -374329477;
unsigned long long int var_18 = 13964433934060488465ULL;
void init() {
}

void checksum() {
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
