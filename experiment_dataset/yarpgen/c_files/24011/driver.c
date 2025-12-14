#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)123;
short var_14 = (short)-3172;
int zero = 0;
unsigned short var_20 = (unsigned short)18478;
unsigned int var_21 = 3363113870U;
unsigned char var_22 = (unsigned char)120;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
