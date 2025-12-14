#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 750661433;
unsigned long long int var_3 = 10569767707032603928ULL;
short var_4 = (short)-29241;
unsigned char var_6 = (unsigned char)69;
unsigned long long int var_8 = 1214675652609700642ULL;
int zero = 0;
signed char var_16 = (signed char)42;
_Bool var_17 = (_Bool)1;
int var_18 = 1626819471;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
