#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7197;
signed char var_2 = (signed char)-98;
unsigned char var_3 = (unsigned char)109;
_Bool var_4 = (_Bool)0;
int var_6 = -1836322849;
int var_10 = -971833928;
int zero = 0;
short var_13 = (short)31743;
signed char var_14 = (signed char)-53;
unsigned long long int var_15 = 11442746994341986220ULL;
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
