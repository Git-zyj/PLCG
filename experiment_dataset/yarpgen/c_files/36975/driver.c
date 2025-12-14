#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
int var_2 = 1847177494;
short var_3 = (short)20654;
long long int var_6 = -8954183521722753236LL;
unsigned short var_7 = (unsigned short)25601;
int var_8 = -1180433970;
unsigned short var_10 = (unsigned short)62180;
short var_13 = (short)-6404;
unsigned long long int var_14 = 7560938241307013929ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)175;
unsigned char var_21 = (unsigned char)101;
unsigned short var_22 = (unsigned short)60755;
long long int var_23 = 2754125284492327319LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
