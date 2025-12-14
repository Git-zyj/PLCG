#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5869;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 6129342420329500160ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)64;
unsigned short var_17 = (unsigned short)20996;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
