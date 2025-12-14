#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_7 = 9604978999571713377ULL;
unsigned long long int var_8 = 5869855023221471961ULL;
short var_12 = (short)-17496;
unsigned short var_13 = (unsigned short)16042;
unsigned short var_17 = (unsigned short)24969;
unsigned short var_19 = (unsigned short)4609;
int zero = 0;
short var_20 = (short)-4517;
signed char var_21 = (signed char)44;
unsigned long long int var_22 = 15909637273403271641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
