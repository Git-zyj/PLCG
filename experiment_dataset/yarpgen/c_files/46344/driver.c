#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4540145004623043616LL;
unsigned int var_2 = 2330549254U;
unsigned char var_4 = (unsigned char)112;
long long int var_7 = 3388534826304474569LL;
int var_10 = -1615577606;
short var_11 = (short)-28025;
int zero = 0;
unsigned long long int var_13 = 15067692451990582897ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2782084084U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
