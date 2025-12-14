#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2978624148U;
unsigned char var_2 = (unsigned char)253;
short var_3 = (short)13554;
signed char var_6 = (signed char)-52;
signed char var_7 = (signed char)84;
signed char var_9 = (signed char)0;
signed char var_10 = (signed char)-103;
short var_11 = (short)30896;
int zero = 0;
unsigned int var_12 = 2962921267U;
unsigned short var_13 = (unsigned short)52206;
short var_14 = (short)23307;
short var_15 = (short)23414;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
