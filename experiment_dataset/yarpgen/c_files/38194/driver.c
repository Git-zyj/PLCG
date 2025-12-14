#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned short var_3 = (unsigned short)45692;
signed char var_4 = (signed char)117;
signed char var_5 = (signed char)77;
unsigned short var_8 = (unsigned short)112;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)53;
unsigned short var_14 = (unsigned short)47197;
unsigned short var_16 = (unsigned short)38751;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10827927796840794043ULL;
unsigned short var_19 = (unsigned short)30479;
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
