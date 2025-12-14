#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26298;
unsigned short var_2 = (unsigned short)34655;
signed char var_3 = (signed char)-3;
unsigned long long int var_5 = 9019751001921509959ULL;
short var_8 = (short)-8233;
unsigned char var_11 = (unsigned char)149;
int var_12 = 1574898469;
long long int var_13 = -4805178060862938021LL;
int zero = 0;
unsigned int var_14 = 3699366776U;
unsigned int var_15 = 469170598U;
short var_16 = (short)8383;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
