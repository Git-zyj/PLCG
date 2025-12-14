#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-59;
unsigned char var_11 = (unsigned char)230;
unsigned char var_12 = (unsigned char)21;
signed char var_13 = (signed char)77;
int var_15 = 231394702;
int zero = 0;
unsigned char var_20 = (unsigned char)125;
unsigned char var_21 = (unsigned char)2;
short var_22 = (short)-31559;
signed char var_23 = (signed char)-125;
signed char var_24 = (signed char)-63;
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
