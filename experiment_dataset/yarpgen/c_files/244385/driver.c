#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
signed char var_1 = (signed char)119;
unsigned char var_4 = (unsigned char)61;
int var_10 = 1573418455;
unsigned short var_11 = (unsigned short)23813;
long long int var_16 = 5697740984590833842LL;
int zero = 0;
unsigned int var_20 = 524087567U;
short var_21 = (short)-29460;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
