#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6842;
unsigned char var_1 = (unsigned char)151;
unsigned char var_3 = (unsigned char)37;
signed char var_4 = (signed char)76;
short var_6 = (short)-28714;
short var_8 = (short)-25163;
int zero = 0;
long long int var_11 = 1690883105717030646LL;
int var_12 = -1714789775;
long long int var_13 = -2604843254434994359LL;
unsigned int var_14 = 2160932688U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
