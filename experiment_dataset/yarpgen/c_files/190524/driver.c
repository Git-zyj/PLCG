#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2031006741;
short var_3 = (short)24994;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)25;
int zero = 0;
long long int var_19 = 5403490646068028190LL;
signed char var_20 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
