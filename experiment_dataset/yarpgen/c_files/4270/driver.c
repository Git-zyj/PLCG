#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5908869707008089709LL;
unsigned int var_4 = 3203473662U;
int var_6 = 196111879;
short var_9 = (short)-13813;
short var_10 = (short)4522;
int zero = 0;
signed char var_12 = (signed char)-21;
unsigned int var_13 = 454851388U;
short var_14 = (short)-8810;
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
