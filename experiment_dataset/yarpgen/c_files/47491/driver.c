#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
unsigned short var_5 = (unsigned short)52374;
unsigned short var_11 = (unsigned short)16513;
signed char var_12 = (signed char)127;
signed char var_13 = (signed char)-108;
signed char var_14 = (signed char)68;
int zero = 0;
signed char var_16 = (signed char)46;
short var_17 = (short)-9358;
void init() {
}

void checksum() {
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
