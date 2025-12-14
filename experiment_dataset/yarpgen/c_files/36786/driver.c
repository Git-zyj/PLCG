#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13987220471230341586ULL;
unsigned long long int var_3 = 9270454570554681544ULL;
unsigned int var_5 = 1864155052U;
short var_6 = (short)5721;
unsigned long long int var_7 = 9285447813003335659ULL;
unsigned long long int var_8 = 1201742578415354241ULL;
unsigned long long int var_10 = 1932266022782169583ULL;
short var_11 = (short)9406;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-1249;
unsigned short var_15 = (unsigned short)15879;
short var_16 = (short)29152;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
