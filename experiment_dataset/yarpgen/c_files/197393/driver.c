#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)60472;
unsigned short var_10 = (unsigned short)47052;
short var_12 = (short)16262;
signed char var_14 = (signed char)-56;
int zero = 0;
signed char var_17 = (signed char)-125;
signed char var_18 = (signed char)-79;
unsigned char var_19 = (unsigned char)54;
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
