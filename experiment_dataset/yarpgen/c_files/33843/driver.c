#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5544184910776286079ULL;
short var_8 = (short)12692;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)36655;
unsigned short var_13 = (unsigned short)52510;
signed char var_14 = (signed char)65;
short var_15 = (short)-8018;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
