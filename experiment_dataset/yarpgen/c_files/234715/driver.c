#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-64;
unsigned short var_5 = (unsigned short)32782;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-40;
int var_11 = 1150976486;
unsigned int var_12 = 963664763U;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned char var_15 = (unsigned char)224;
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
