#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30191;
unsigned short var_1 = (unsigned short)59177;
unsigned int var_2 = 1360712791U;
unsigned short var_3 = (unsigned short)401;
short var_4 = (short)-31141;
unsigned char var_6 = (unsigned char)153;
int zero = 0;
short var_11 = (short)32454;
long long int var_12 = -6130423187610987897LL;
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
