#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11723;
unsigned int var_1 = 830208070U;
unsigned short var_3 = (unsigned short)21663;
unsigned short var_4 = (unsigned short)64155;
signed char var_8 = (signed char)43;
unsigned short var_10 = (unsigned short)3914;
unsigned short var_11 = (unsigned short)41443;
int zero = 0;
unsigned int var_12 = 2001405812U;
short var_13 = (short)-4938;
unsigned char var_14 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
