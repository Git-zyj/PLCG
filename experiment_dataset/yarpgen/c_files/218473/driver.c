#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14134;
short var_7 = (short)17543;
long long int var_12 = -282126501028047211LL;
short var_17 = (short)-23645;
int zero = 0;
signed char var_18 = (signed char)112;
unsigned char var_19 = (unsigned char)209;
unsigned short var_20 = (unsigned short)18157;
void init() {
}

void checksum() {
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
