#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
long long int var_2 = 2118088004050782203LL;
_Bool var_6 = (_Bool)0;
short var_12 = (short)-24961;
signed char var_15 = (signed char)-62;
int zero = 0;
unsigned int var_16 = 2486648660U;
signed char var_17 = (signed char)-108;
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
