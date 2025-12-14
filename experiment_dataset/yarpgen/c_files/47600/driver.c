#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
short var_3 = (short)-24927;
unsigned short var_4 = (unsigned short)11504;
unsigned int var_5 = 1025055404U;
_Bool var_6 = (_Bool)0;
unsigned short var_13 = (unsigned short)65534;
int zero = 0;
short var_15 = (short)-12659;
long long int var_16 = 4158563409079697565LL;
int var_17 = 70328064;
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
