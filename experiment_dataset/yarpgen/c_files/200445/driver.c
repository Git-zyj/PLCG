#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 9059486573338593922ULL;
signed char var_8 = (signed char)119;
signed char var_10 = (signed char)-127;
unsigned short var_11 = (unsigned short)44185;
short var_18 = (short)11916;
unsigned int var_19 = 4206318227U;
int zero = 0;
short var_20 = (short)5344;
long long int var_21 = -3307773429013399439LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
