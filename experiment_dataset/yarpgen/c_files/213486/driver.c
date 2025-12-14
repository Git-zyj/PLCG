#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6219715263279833496ULL;
signed char var_1 = (signed char)91;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)17128;
unsigned char var_13 = (unsigned char)11;
long long int var_16 = -6322111048423363677LL;
int zero = 0;
signed char var_19 = (signed char)94;
unsigned long long int var_20 = 17804882671179366325ULL;
short var_21 = (short)5687;
signed char var_22 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
