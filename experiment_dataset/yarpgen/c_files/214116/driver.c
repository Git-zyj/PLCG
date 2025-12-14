#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12940;
unsigned long long int var_2 = 16022046831899777276ULL;
unsigned short var_3 = (unsigned short)32068;
unsigned char var_4 = (unsigned char)217;
short var_5 = (short)-18095;
int var_6 = 1217807081;
unsigned short var_7 = (unsigned short)38962;
long long int var_8 = 2770164379240214735LL;
int zero = 0;
short var_10 = (short)-10740;
int var_11 = 872257430;
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
