#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8174019990101127160LL;
long long int var_8 = 35481114691441289LL;
unsigned char var_14 = (unsigned char)147;
short var_17 = (short)3576;
int zero = 0;
signed char var_18 = (signed char)86;
unsigned char var_19 = (unsigned char)87;
unsigned char var_20 = (unsigned char)181;
void init() {
}

void checksum() {
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
