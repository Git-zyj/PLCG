#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1402731738;
signed char var_4 = (signed char)59;
long long int var_6 = -2582958966090174094LL;
int var_11 = 1426870499;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-22294;
signed char var_14 = (signed char)-102;
unsigned char var_15 = (unsigned char)128;
signed char var_16 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
