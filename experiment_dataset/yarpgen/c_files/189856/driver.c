#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)31;
short var_6 = (short)-8939;
signed char var_7 = (signed char)1;
int var_10 = 1728475255;
signed char var_11 = (signed char)-98;
unsigned short var_13 = (unsigned short)46657;
int zero = 0;
signed char var_14 = (signed char)-92;
long long int var_15 = 3544977525004936073LL;
signed char var_16 = (signed char)-14;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
