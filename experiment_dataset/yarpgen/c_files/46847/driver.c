#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63394;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-65;
short var_6 = (short)-1735;
short var_8 = (short)26430;
int zero = 0;
unsigned short var_10 = (unsigned short)30959;
short var_11 = (short)25539;
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
