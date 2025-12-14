#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
short var_2 = (short)11746;
unsigned short var_3 = (unsigned short)33128;
unsigned short var_4 = (unsigned short)31280;
unsigned int var_5 = 2884357331U;
short var_6 = (short)1836;
unsigned short var_7 = (unsigned short)56274;
signed char var_8 = (signed char)-3;
int zero = 0;
unsigned long long int var_10 = 5168975318195204745ULL;
unsigned long long int var_11 = 3267436287527467762ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
