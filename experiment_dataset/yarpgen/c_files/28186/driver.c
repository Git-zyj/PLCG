#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)1;
signed char var_3 = (signed char)-67;
int var_4 = -273482756;
short var_6 = (short)-28382;
unsigned char var_7 = (unsigned char)8;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)11;
unsigned int var_11 = 514738235U;
int var_12 = -729958642;
short var_13 = (short)-23022;
unsigned long long int var_14 = 14678436100104698106ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
