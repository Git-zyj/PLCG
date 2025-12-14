#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)177;
unsigned short var_5 = (unsigned short)9784;
unsigned int var_7 = 3820001342U;
int zero = 0;
unsigned short var_12 = (unsigned short)62165;
int var_13 = -217313974;
unsigned long long int var_14 = 3986246613453412156ULL;
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
