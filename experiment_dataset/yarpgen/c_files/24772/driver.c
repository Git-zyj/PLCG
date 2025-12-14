#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17076;
short var_2 = (short)-8843;
long long int var_6 = 8105107223768163111LL;
short var_14 = (short)-1183;
unsigned short var_16 = (unsigned short)22711;
int var_18 = 877117520;
int zero = 0;
unsigned int var_20 = 169617884U;
unsigned long long int var_21 = 1520117443745993978ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
