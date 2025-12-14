#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27344;
unsigned short var_3 = (unsigned short)16402;
unsigned short var_4 = (unsigned short)12868;
short var_5 = (short)12405;
int zero = 0;
long long int var_12 = -7432521978166221186LL;
long long int var_13 = 309161765538645020LL;
unsigned long long int var_14 = 3670544949075500312ULL;
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
