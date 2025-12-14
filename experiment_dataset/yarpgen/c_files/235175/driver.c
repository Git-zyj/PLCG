#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1673927414;
unsigned short var_3 = (unsigned short)17153;
unsigned short var_10 = (unsigned short)6503;
int zero = 0;
unsigned short var_12 = (unsigned short)52166;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)12637;
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
