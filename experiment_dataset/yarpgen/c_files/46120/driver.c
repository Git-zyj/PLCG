#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2097551956;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)49596;
int zero = 0;
int var_18 = 2015183345;
signed char var_19 = (signed char)71;
short var_20 = (short)-8813;
signed char var_21 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
