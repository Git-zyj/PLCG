#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
int var_4 = 657769769;
unsigned int var_5 = 707159852U;
short var_6 = (short)-3436;
unsigned long long int var_9 = 13444131654047649352ULL;
int zero = 0;
signed char var_11 = (signed char)0;
signed char var_12 = (signed char)42;
unsigned char var_13 = (unsigned char)10;
long long int var_14 = 503261976791947621LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
