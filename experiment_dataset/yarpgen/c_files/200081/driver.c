#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40766;
unsigned short var_2 = (unsigned short)61398;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)3148;
short var_10 = (short)-19723;
int zero = 0;
unsigned long long int var_11 = 2470444074420566424ULL;
unsigned char var_12 = (unsigned char)61;
short var_13 = (short)-14530;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
