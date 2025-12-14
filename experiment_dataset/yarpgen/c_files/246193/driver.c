#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-123;
unsigned short var_11 = (unsigned short)15006;
long long int var_13 = 2376146751002707538LL;
signed char var_14 = (signed char)-115;
unsigned char var_16 = (unsigned char)66;
short var_17 = (short)10456;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -199648384135948682LL;
unsigned char var_21 = (unsigned char)139;
int var_22 = -472532440;
long long int var_23 = 3613660139317604290LL;
long long int var_24 = -8174415276573236318LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
