#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -1817734448909383826LL;
int var_9 = -2043885999;
int var_12 = 1323005034;
unsigned int var_14 = 3979296250U;
int zero = 0;
signed char var_16 = (signed char)-8;
short var_17 = (short)-26734;
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
