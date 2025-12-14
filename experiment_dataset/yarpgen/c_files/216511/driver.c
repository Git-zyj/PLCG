#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -259064078;
long long int var_6 = -7887213820958488172LL;
unsigned char var_7 = (unsigned char)76;
int zero = 0;
int var_13 = -526106244;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)52;
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
