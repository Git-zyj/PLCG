#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)14;
long long int var_7 = 6958378840304019002LL;
int zero = 0;
signed char var_11 = (signed char)105;
unsigned short var_12 = (unsigned short)60540;
long long int var_13 = 1480437811917639352LL;
signed char var_14 = (signed char)-38;
long long int var_15 = -8208149653934917972LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
