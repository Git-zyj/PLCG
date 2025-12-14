#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)57;
short var_4 = (short)-173;
unsigned char var_11 = (unsigned char)11;
int zero = 0;
unsigned int var_18 = 2163457152U;
unsigned short var_19 = (unsigned short)56439;
unsigned char var_20 = (unsigned char)40;
long long int var_21 = -1285113805699906924LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
