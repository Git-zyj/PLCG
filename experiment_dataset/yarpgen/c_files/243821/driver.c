#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
unsigned int var_2 = 1754806175U;
unsigned char var_3 = (unsigned char)243;
unsigned char var_4 = (unsigned char)124;
short var_5 = (short)1493;
unsigned short var_10 = (unsigned short)26106;
short var_12 = (short)31394;
int zero = 0;
unsigned int var_18 = 1951315842U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
