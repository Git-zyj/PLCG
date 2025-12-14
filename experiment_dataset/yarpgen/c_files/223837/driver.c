#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36244;
short var_1 = (short)8655;
unsigned long long int var_2 = 17949663503533468644ULL;
int var_3 = -1104966503;
unsigned long long int var_4 = 8046991156290466496ULL;
unsigned int var_5 = 4018803166U;
unsigned short var_6 = (unsigned short)3576;
long long int var_8 = -4780064389351911129LL;
signed char var_9 = (signed char)35;
int zero = 0;
unsigned long long int var_10 = 10781753740645763017ULL;
unsigned int var_11 = 855954286U;
unsigned long long int var_12 = 9446706691351773323ULL;
short var_13 = (short)-25548;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
