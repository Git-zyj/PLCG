#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2341992746464095486LL;
unsigned short var_1 = (unsigned short)45;
int var_2 = 2134837637;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)187;
unsigned int var_7 = 1490940991U;
short var_11 = (short)-3775;
int var_12 = 997992102;
unsigned short var_14 = (unsigned short)7492;
int zero = 0;
unsigned char var_15 = (unsigned char)223;
_Bool var_16 = (_Bool)1;
short var_17 = (short)29170;
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
