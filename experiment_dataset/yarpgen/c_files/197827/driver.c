#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17796;
int var_2 = -730169835;
unsigned char var_3 = (unsigned char)101;
unsigned short var_5 = (unsigned short)4910;
unsigned int var_7 = 498480818U;
short var_8 = (short)935;
unsigned short var_10 = (unsigned short)61426;
short var_11 = (short)11380;
short var_12 = (short)-27009;
short var_15 = (short)-18733;
int zero = 0;
short var_17 = (short)-6463;
short var_18 = (short)-15585;
unsigned short var_19 = (unsigned short)56096;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
