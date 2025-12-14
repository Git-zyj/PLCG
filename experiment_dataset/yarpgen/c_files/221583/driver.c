#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
signed char var_3 = (signed char)-117;
short var_6 = (short)2679;
unsigned char var_7 = (unsigned char)215;
unsigned long long int var_8 = 15191688595557119239ULL;
int zero = 0;
unsigned long long int var_17 = 5461983171677336122ULL;
unsigned long long int var_18 = 12891465686455675178ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
