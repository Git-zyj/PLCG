#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4524;
unsigned char var_2 = (unsigned char)42;
signed char var_3 = (signed char)-13;
signed char var_7 = (signed char)60;
unsigned int var_8 = 756202110U;
short var_9 = (short)-26700;
int zero = 0;
unsigned short var_12 = (unsigned short)53590;
short var_13 = (short)1314;
short var_14 = (short)6762;
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
