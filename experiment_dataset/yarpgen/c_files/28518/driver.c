#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1002530725;
short var_2 = (short)-28560;
int var_3 = -2139547719;
long long int var_7 = -7800160790122766848LL;
short var_11 = (short)-22304;
signed char var_12 = (signed char)-89;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)18575;
unsigned short var_16 = (unsigned short)47016;
long long int var_17 = 6347218142485947146LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
