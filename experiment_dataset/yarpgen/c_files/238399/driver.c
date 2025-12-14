#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)15;
long long int var_6 = -1068679009948857358LL;
unsigned char var_7 = (unsigned char)40;
short var_11 = (short)-4922;
short var_13 = (short)-16123;
int zero = 0;
signed char var_18 = (signed char)8;
int var_19 = 1941802733;
int var_20 = 1633558385;
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
