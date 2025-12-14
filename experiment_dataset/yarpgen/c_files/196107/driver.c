#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1006183058;
signed char var_4 = (signed char)-5;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)23;
short var_13 = (short)-21720;
int zero = 0;
short var_14 = (short)-8524;
signed char var_15 = (signed char)-122;
unsigned char var_16 = (unsigned char)42;
void init() {
}

void checksum() {
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
