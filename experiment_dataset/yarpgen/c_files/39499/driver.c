#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
short var_3 = (short)-1296;
long long int var_5 = -4163656093560585579LL;
short var_12 = (short)-18942;
short var_14 = (short)32547;
int zero = 0;
unsigned char var_16 = (unsigned char)32;
signed char var_17 = (signed char)-97;
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
