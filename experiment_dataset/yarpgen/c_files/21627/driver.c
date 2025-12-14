#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)244;
signed char var_8 = (signed char)-97;
unsigned long long int var_10 = 9814053301893033103ULL;
unsigned short var_11 = (unsigned short)49510;
int var_14 = 781825796;
int zero = 0;
signed char var_16 = (signed char)67;
short var_17 = (short)10114;
long long int var_18 = -7997862137517082111LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
