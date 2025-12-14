#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-42;
long long int var_11 = 6341587707580850628LL;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
long long int var_14 = 2751731406528832812LL;
signed char var_15 = (signed char)18;
unsigned short var_16 = (unsigned short)37087;
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
