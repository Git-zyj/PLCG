#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
long long int var_10 = -5067381417560883148LL;
signed char var_11 = (signed char)111;
long long int var_12 = 6883519018726581541LL;
short var_13 = (short)-19731;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-38;
int zero = 0;
long long int var_17 = -4351285734873336524LL;
short var_18 = (short)-32003;
signed char var_19 = (signed char)0;
unsigned long long int var_20 = 3187397143564345384ULL;
void init() {
}

void checksum() {
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
