#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
int var_3 = 85808904;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3343995324U;
short var_12 = (short)3558;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
int var_15 = -1471304638;
signed char var_16 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
