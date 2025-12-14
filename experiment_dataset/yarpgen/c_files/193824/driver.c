#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45976;
_Bool var_3 = (_Bool)1;
int var_12 = -1579211752;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
signed char var_18 = (signed char)41;
unsigned long long int var_19 = 7751092521946245266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
