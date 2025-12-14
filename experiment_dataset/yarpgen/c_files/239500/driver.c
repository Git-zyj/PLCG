#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64050;
unsigned int var_2 = 2255338349U;
unsigned char var_4 = (unsigned char)179;
unsigned long long int var_5 = 11288886395940668779ULL;
unsigned long long int var_6 = 5942493971367597591ULL;
unsigned int var_7 = 80968324U;
unsigned char var_8 = (unsigned char)225;
short var_9 = (short)-3497;
int zero = 0;
int var_17 = 1741110587;
short var_18 = (short)12843;
unsigned int var_19 = 2051222405U;
unsigned char var_20 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
