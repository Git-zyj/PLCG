#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -122643687;
short var_8 = (short)13344;
int zero = 0;
unsigned char var_10 = (unsigned char)73;
int var_11 = 578295060;
unsigned short var_12 = (unsigned short)38441;
long long int var_13 = -7153960603244199251LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
