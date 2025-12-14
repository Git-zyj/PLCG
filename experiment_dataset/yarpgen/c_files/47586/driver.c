#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24431;
long long int var_2 = 3929030455581794630LL;
unsigned long long int var_3 = 15207367132963506283ULL;
unsigned char var_5 = (unsigned char)206;
signed char var_6 = (signed char)-85;
unsigned short var_14 = (unsigned short)29890;
int zero = 0;
short var_17 = (short)5256;
int var_18 = -2007967570;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
