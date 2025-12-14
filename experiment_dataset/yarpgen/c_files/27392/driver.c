#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
short var_4 = (short)-8461;
_Bool var_7 = (_Bool)1;
short var_19 = (short)-2334;
int zero = 0;
unsigned short var_20 = (unsigned short)40899;
unsigned int var_21 = 3466426052U;
short var_22 = (short)7913;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
