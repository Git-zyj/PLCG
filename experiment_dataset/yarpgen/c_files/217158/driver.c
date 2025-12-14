#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30251;
short var_1 = (short)-2670;
long long int var_2 = 34651729897535522LL;
short var_3 = (short)-7843;
short var_4 = (short)-16292;
unsigned short var_6 = (unsigned short)52147;
unsigned long long int var_8 = 16515114216429610778ULL;
short var_10 = (short)-11619;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5848693926072625221LL;
short var_17 = (short)15160;
unsigned char var_18 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
