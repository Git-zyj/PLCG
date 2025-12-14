#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -323632607217612386LL;
signed char var_5 = (signed char)0;
unsigned int var_8 = 3678164494U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-17869;
int zero = 0;
unsigned short var_12 = (unsigned short)50756;
unsigned short var_13 = (unsigned short)4160;
unsigned int var_14 = 2682130682U;
void init() {
}

void checksum() {
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
