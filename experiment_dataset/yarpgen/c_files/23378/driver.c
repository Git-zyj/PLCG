#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51694;
signed char var_8 = (signed char)-34;
unsigned short var_9 = (unsigned short)35099;
unsigned char var_10 = (unsigned char)59;
unsigned short var_16 = (unsigned short)56624;
int zero = 0;
unsigned short var_17 = (unsigned short)33571;
unsigned short var_18 = (unsigned short)14227;
short var_19 = (short)-5126;
short var_20 = (short)18030;
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
