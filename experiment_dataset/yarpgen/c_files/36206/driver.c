#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)7;
unsigned short var_7 = (unsigned short)39992;
short var_11 = (short)-29157;
unsigned char var_13 = (unsigned char)6;
signed char var_16 = (signed char)-123;
int zero = 0;
signed char var_18 = (signed char)-10;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4717847102112819681LL;
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
