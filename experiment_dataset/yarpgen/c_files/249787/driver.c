#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15466;
int var_2 = -364488810;
long long int var_3 = -2904545437156010924LL;
int var_7 = -1061254991;
short var_8 = (short)148;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)28037;
signed char var_14 = (signed char)-61;
unsigned int var_15 = 1729482478U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
