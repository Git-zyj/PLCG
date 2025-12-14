#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5056285290730873802LL;
short var_5 = (short)2341;
unsigned short var_9 = (unsigned short)47026;
signed char var_11 = (signed char)-62;
long long int var_12 = -4076385359979437444LL;
unsigned short var_13 = (unsigned short)56421;
int zero = 0;
int var_16 = 1724085897;
signed char var_17 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
