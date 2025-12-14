#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)5;
signed char var_2 = (signed char)70;
unsigned int var_11 = 3172194369U;
long long int var_14 = 3236375425310641929LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)27;
long long int var_19 = 2257643321447497658LL;
unsigned short var_20 = (unsigned short)2854;
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
