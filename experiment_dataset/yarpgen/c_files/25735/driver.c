#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3758;
signed char var_2 = (signed char)8;
long long int var_4 = -2859199206910314781LL;
unsigned int var_8 = 2937956318U;
long long int var_10 = -7327272240590030905LL;
unsigned short var_11 = (unsigned short)20752;
int zero = 0;
unsigned long long int var_15 = 10385109398391803483ULL;
long long int var_16 = -3120733212611470302LL;
unsigned short var_17 = (unsigned short)38888;
unsigned char var_18 = (unsigned char)139;
long long int var_19 = 1659817637105309230LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
