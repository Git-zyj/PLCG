#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4744;
unsigned short var_3 = (unsigned short)54632;
unsigned int var_6 = 3774698723U;
long long int var_7 = 7077642027307497219LL;
unsigned short var_8 = (unsigned short)22711;
short var_9 = (short)5900;
int zero = 0;
unsigned short var_13 = (unsigned short)9824;
unsigned int var_14 = 2848006761U;
void init() {
}

void checksum() {
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
