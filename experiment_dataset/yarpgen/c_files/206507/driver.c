#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3648752364699268587ULL;
long long int var_2 = -4221144095733526423LL;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
int var_13 = 1622315301;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14861414193022454732ULL;
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
