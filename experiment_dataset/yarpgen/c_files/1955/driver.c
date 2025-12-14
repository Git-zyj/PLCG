#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7368294551059321814ULL;
unsigned char var_2 = (unsigned char)80;
int var_4 = 586363102;
short var_6 = (short)28841;
signed char var_7 = (signed char)32;
unsigned short var_12 = (unsigned short)29818;
int zero = 0;
unsigned char var_14 = (unsigned char)57;
signed char var_15 = (signed char)-98;
unsigned char var_16 = (unsigned char)209;
unsigned char var_17 = (unsigned char)182;
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
