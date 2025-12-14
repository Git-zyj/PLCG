#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
short var_1 = (short)-30456;
short var_2 = (short)-5563;
unsigned short var_4 = (unsigned short)57613;
unsigned long long int var_6 = 6090903218465184514ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)171;
unsigned int var_14 = 2951594940U;
int var_15 = 995018064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
