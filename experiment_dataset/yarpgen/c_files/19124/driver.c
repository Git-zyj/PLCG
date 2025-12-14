#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1212375055U;
unsigned int var_1 = 4197873913U;
unsigned short var_7 = (unsigned short)13565;
unsigned char var_8 = (unsigned char)103;
signed char var_11 = (signed char)-5;
unsigned char var_12 = (unsigned char)122;
int var_15 = 1640649240;
unsigned int var_18 = 3505772926U;
int zero = 0;
short var_20 = (short)29238;
unsigned short var_21 = (unsigned short)34864;
unsigned char var_22 = (unsigned char)87;
unsigned int var_23 = 1736433325U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
