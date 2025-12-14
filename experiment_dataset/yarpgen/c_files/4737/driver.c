#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9503;
unsigned short var_4 = (unsigned short)35056;
short var_5 = (short)5661;
short var_12 = (short)-29934;
signed char var_13 = (signed char)-92;
signed char var_15 = (signed char)97;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
unsigned short var_21 = (unsigned short)44864;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
