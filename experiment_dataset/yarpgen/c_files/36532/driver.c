#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55833;
unsigned long long int var_5 = 2041304983040998900ULL;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)-62;
short var_11 = (short)24986;
unsigned long long int var_13 = 1641246393126555034ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)43123;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
