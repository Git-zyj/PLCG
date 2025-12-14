#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1379611658;
unsigned long long int var_8 = 1927268313004590139ULL;
unsigned char var_14 = (unsigned char)191;
long long int var_18 = -1006869572390290586LL;
unsigned long long int var_19 = 6096935879658937776ULL;
int zero = 0;
unsigned long long int var_20 = 6672768701714622563ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3606192472344956421LL;
signed char var_23 = (signed char)122;
short var_24 = (short)-13255;
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
