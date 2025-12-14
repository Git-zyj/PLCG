#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3276;
long long int var_6 = 4333738853254790526LL;
unsigned char var_17 = (unsigned char)158;
unsigned int var_18 = 2218120166U;
int zero = 0;
int var_19 = -493514812;
long long int var_20 = 9031505198442522783LL;
void init() {
}

void checksum() {
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
