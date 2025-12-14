#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1326986717U;
unsigned int var_2 = 1853117673U;
unsigned short var_4 = (unsigned short)17900;
short var_5 = (short)-9674;
short var_7 = (short)11643;
long long int var_9 = 774665923980345129LL;
signed char var_10 = (signed char)77;
int zero = 0;
unsigned short var_11 = (unsigned short)35757;
unsigned int var_12 = 1400001351U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
