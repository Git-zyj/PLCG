#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1977442934;
signed char var_4 = (signed char)44;
signed char var_5 = (signed char)-111;
unsigned short var_6 = (unsigned short)45875;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3223785378154899826ULL;
unsigned char var_15 = (unsigned char)14;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
