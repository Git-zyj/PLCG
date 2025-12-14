#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29657;
_Bool var_7 = (_Bool)0;
short var_8 = (short)28354;
unsigned char var_11 = (unsigned char)184;
unsigned char var_13 = (unsigned char)86;
unsigned int var_16 = 3040228970U;
int zero = 0;
short var_20 = (short)28355;
unsigned char var_21 = (unsigned char)139;
int var_22 = -937593477;
unsigned int var_23 = 3741079819U;
unsigned char var_24 = (unsigned char)26;
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
