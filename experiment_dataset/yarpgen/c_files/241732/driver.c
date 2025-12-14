#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
short var_3 = (short)15578;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-16217;
unsigned char var_7 = (unsigned char)64;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)120;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2006304145U;
signed char var_15 = (signed char)39;
unsigned short var_16 = (unsigned short)54032;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
