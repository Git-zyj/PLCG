#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5901;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)74;
long long int var_13 = 4040735420376414497LL;
int zero = 0;
long long int var_20 = 2610387986986539629LL;
unsigned char var_21 = (unsigned char)112;
unsigned long long int var_22 = 3350366123754833292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
