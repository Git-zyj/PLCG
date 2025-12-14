#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54410;
int var_3 = 2049048144;
signed char var_5 = (signed char)104;
int var_8 = -361240677;
unsigned short var_11 = (unsigned short)38962;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
short var_21 = (short)32173;
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
