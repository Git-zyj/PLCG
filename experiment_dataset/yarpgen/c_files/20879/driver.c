#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-123;
unsigned short var_7 = (unsigned short)1265;
signed char var_13 = (signed char)116;
int var_15 = -2117482672;
_Bool var_17 = (_Bool)0;
int var_18 = 150681221;
short var_19 = (short)30792;
int zero = 0;
int var_20 = 278867883;
short var_21 = (short)25765;
long long int var_22 = 3659016733839317061LL;
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
