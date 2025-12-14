#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
unsigned long long int var_7 = 16200554706951570794ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 5839001177774906583ULL;
short var_11 = (short)19284;
int zero = 0;
unsigned long long int var_15 = 4168897417428166484ULL;
unsigned char var_16 = (unsigned char)92;
short var_17 = (short)-152;
void init() {
}

void checksum() {
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
