#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned short var_1 = (unsigned short)33176;
unsigned short var_11 = (unsigned short)41081;
short var_13 = (short)-17756;
int zero = 0;
long long int var_16 = 6352398935868986902LL;
signed char var_17 = (signed char)5;
unsigned long long int var_18 = 5642231495021950058ULL;
unsigned char var_19 = (unsigned char)91;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
