#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
short var_2 = (short)7436;
unsigned int var_4 = 264976855U;
signed char var_5 = (signed char)18;
_Bool var_6 = (_Bool)1;
short var_13 = (short)19941;
int zero = 0;
unsigned char var_17 = (unsigned char)199;
signed char var_18 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
