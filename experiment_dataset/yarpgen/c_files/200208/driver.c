#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20863;
int var_1 = -756906081;
unsigned long long int var_3 = 1914986554086385221ULL;
unsigned int var_4 = 1154322779U;
unsigned char var_5 = (unsigned char)171;
unsigned int var_8 = 2359603060U;
signed char var_10 = (signed char)13;
int zero = 0;
signed char var_13 = (signed char)-40;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
