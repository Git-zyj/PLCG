#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1110155082;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)45557;
unsigned int var_9 = 2806746500U;
int zero = 0;
short var_10 = (short)29152;
signed char var_11 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
