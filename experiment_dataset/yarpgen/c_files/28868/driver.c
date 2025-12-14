#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
unsigned int var_3 = 371781489U;
short var_8 = (short)-26628;
short var_9 = (short)-3333;
long long int var_12 = 8212918712508852330LL;
int zero = 0;
unsigned long long int var_13 = 8051183429751937310ULL;
unsigned int var_14 = 1720635510U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
