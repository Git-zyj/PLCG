#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
signed char var_1 = (signed char)52;
unsigned char var_4 = (unsigned char)27;
signed char var_7 = (signed char)-99;
short var_8 = (short)5684;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-481;
int zero = 0;
unsigned short var_14 = (unsigned short)563;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
