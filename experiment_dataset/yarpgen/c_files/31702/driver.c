#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3886349738383507557LL;
unsigned int var_3 = 3301048312U;
unsigned short var_4 = (unsigned short)6286;
int var_7 = 791589805;
short var_9 = (short)6211;
unsigned int var_11 = 2021560528U;
int zero = 0;
signed char var_15 = (signed char)22;
signed char var_16 = (signed char)-100;
short var_17 = (short)4954;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
