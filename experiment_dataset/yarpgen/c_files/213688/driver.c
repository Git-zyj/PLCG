#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17744;
unsigned short var_6 = (unsigned short)34602;
long long int var_11 = 8737516111032608866LL;
long long int var_12 = 545010575077308862LL;
int zero = 0;
signed char var_18 = (signed char)106;
unsigned short var_19 = (unsigned short)52746;
long long int var_20 = -1661658958174788073LL;
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
