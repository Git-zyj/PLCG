#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40772;
short var_2 = (short)-31011;
unsigned short var_4 = (unsigned short)57391;
unsigned int var_5 = 3750730514U;
long long int var_6 = -6301988746480597434LL;
long long int var_7 = -7552757400492161423LL;
int zero = 0;
signed char var_10 = (signed char)100;
unsigned char var_11 = (unsigned char)63;
signed char var_12 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
