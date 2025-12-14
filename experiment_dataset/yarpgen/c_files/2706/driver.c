#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 249410609;
signed char var_2 = (signed char)73;
signed char var_6 = (signed char)72;
int var_9 = -1967743696;
int zero = 0;
short var_12 = (short)-17014;
long long int var_13 = 8177172567105052302LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
