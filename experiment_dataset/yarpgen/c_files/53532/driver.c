#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)119;
long long int var_5 = 3615698632388966036LL;
unsigned char var_8 = (unsigned char)30;
short var_9 = (short)-18780;
unsigned short var_12 = (unsigned short)10902;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)12150;
int zero = 0;
unsigned int var_18 = 3094426886U;
unsigned long long int var_19 = 16839318098205255475ULL;
int var_20 = -893487992;
unsigned short var_21 = (unsigned short)12570;
unsigned char var_22 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
