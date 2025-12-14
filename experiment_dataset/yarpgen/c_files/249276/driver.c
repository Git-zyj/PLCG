#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1911867004;
unsigned char var_1 = (unsigned char)224;
_Bool var_2 = (_Bool)0;
unsigned int var_7 = 1784759050U;
unsigned char var_9 = (unsigned char)57;
int var_11 = -1499446181;
signed char var_14 = (signed char)-63;
int zero = 0;
signed char var_15 = (signed char)67;
short var_16 = (short)23886;
void init() {
}

void checksum() {
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
