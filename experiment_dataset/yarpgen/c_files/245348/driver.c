#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24215;
unsigned char var_4 = (unsigned char)144;
int var_8 = 1574580694;
unsigned short var_10 = (unsigned short)20050;
int zero = 0;
long long int var_12 = -6301750663567538863LL;
long long int var_13 = -3412774720549475265LL;
void init() {
}

void checksum() {
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
