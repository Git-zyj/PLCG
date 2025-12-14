#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -251300490;
signed char var_5 = (signed char)-21;
signed char var_8 = (signed char)86;
short var_9 = (short)24636;
unsigned int var_10 = 481588609U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-28195;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-82;
short var_16 = (short)30446;
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
