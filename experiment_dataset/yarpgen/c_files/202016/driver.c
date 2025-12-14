#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30628;
signed char var_2 = (signed char)-83;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 10739225579619467981ULL;
unsigned char var_7 = (unsigned char)226;
unsigned long long int var_10 = 17275199376948238244ULL;
unsigned short var_14 = (unsigned short)65049;
unsigned long long int var_17 = 2149009032343422209ULL;
int zero = 0;
unsigned long long int var_19 = 15173877664093763504ULL;
unsigned long long int var_20 = 15257606549523097377ULL;
void init() {
}

void checksum() {
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
