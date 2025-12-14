#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -664530458;
short var_9 = (short)29696;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-45;
unsigned long long int var_16 = 103952669539688077ULL;
unsigned short var_17 = (unsigned short)16913;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-21014;
unsigned int var_20 = 1220538244U;
short var_21 = (short)-2209;
signed char var_22 = (signed char)(-127 - 1);
unsigned short var_23 = (unsigned short)65357;
unsigned short var_24 = (unsigned short)45052;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
