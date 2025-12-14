#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16533798925862811146ULL;
short var_4 = (short)-4105;
short var_5 = (short)13532;
unsigned int var_6 = 1597039210U;
signed char var_8 = (signed char)118;
short var_9 = (short)16245;
short var_10 = (short)22836;
int zero = 0;
unsigned char var_12 = (unsigned char)190;
unsigned char var_13 = (unsigned char)4;
short var_14 = (short)-15926;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
