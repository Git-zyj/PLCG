#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
short var_4 = (short)32622;
unsigned char var_5 = (unsigned char)56;
signed char var_6 = (signed char)-101;
unsigned short var_7 = (unsigned short)29703;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11780790506017233836ULL;
int zero = 0;
long long int var_15 = -9190049147880846904LL;
signed char var_16 = (signed char)-86;
void init() {
}

void checksum() {
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
