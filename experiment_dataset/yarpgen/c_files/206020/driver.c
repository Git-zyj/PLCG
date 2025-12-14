#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 891194795;
_Bool var_3 = (_Bool)1;
long long int var_6 = -4735712951751690037LL;
unsigned int var_8 = 3056618139U;
unsigned int var_10 = 2364899417U;
int zero = 0;
short var_12 = (short)-25344;
unsigned short var_13 = (unsigned short)53519;
int var_14 = 831729476;
unsigned long long int var_15 = 10833962392878262314ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
