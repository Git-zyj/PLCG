#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1775338142U;
unsigned int var_1 = 3914660556U;
unsigned int var_3 = 3651846543U;
signed char var_4 = (signed char)-119;
short var_7 = (short)19975;
int var_10 = 1959667803;
unsigned char var_11 = (unsigned char)155;
int zero = 0;
signed char var_12 = (signed char)16;
long long int var_13 = 4448713377038675408LL;
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
