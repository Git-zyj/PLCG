#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50858;
long long int var_4 = 5307307599593025848LL;
unsigned char var_6 = (unsigned char)190;
long long int var_8 = 2096862777667417102LL;
long long int var_9 = 978331171598899502LL;
long long int var_10 = -985560842130009998LL;
long long int var_11 = -8457094936740237308LL;
int zero = 0;
short var_13 = (short)80;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)33718;
short var_16 = (short)-16495;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
