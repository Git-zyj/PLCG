#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3595940774U;
short var_3 = (short)20217;
unsigned int var_7 = 963266244U;
short var_8 = (short)12629;
unsigned char var_10 = (unsigned char)74;
unsigned short var_13 = (unsigned short)17167;
int var_17 = 1020540652;
int zero = 0;
unsigned int var_18 = 4006839788U;
long long int var_19 = 2573573725964533145LL;
unsigned char var_20 = (unsigned char)144;
unsigned char var_21 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
