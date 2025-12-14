#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
signed char var_2 = (signed char)1;
short var_4 = (short)20780;
int var_5 = -638550933;
unsigned char var_6 = (unsigned char)239;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12802170093004521351ULL;
unsigned short var_17 = (unsigned short)42173;
long long int var_18 = 4763224080488681638LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
