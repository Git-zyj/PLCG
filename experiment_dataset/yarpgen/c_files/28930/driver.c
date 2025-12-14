#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -721503397;
long long int var_4 = 3141194959902115420LL;
_Bool var_5 = (_Bool)0;
int var_8 = -1114457674;
short var_11 = (short)-7055;
short var_12 = (short)26204;
int zero = 0;
long long int var_13 = -2476448272954797607LL;
int var_14 = 973630341;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)81;
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
