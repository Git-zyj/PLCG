#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3510996404U;
short var_3 = (short)21710;
unsigned int var_4 = 3422207174U;
int var_7 = 200973186;
int var_13 = -1624130084;
int zero = 0;
unsigned short var_18 = (unsigned short)18098;
long long int var_19 = -975258666360048026LL;
void init() {
}

void checksum() {
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
