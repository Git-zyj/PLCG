#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1039999801753270022ULL;
unsigned short var_2 = (unsigned short)31164;
signed char var_3 = (signed char)21;
unsigned long long int var_5 = 4676371080949575229ULL;
short var_14 = (short)-19905;
int zero = 0;
signed char var_15 = (signed char)-64;
unsigned char var_16 = (unsigned char)222;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
