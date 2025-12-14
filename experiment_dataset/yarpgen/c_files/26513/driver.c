#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5728504495805183949LL;
unsigned short var_5 = (unsigned short)28915;
int var_6 = -413968693;
unsigned long long int var_7 = 14628905970042257259ULL;
short var_13 = (short)-20471;
int zero = 0;
unsigned short var_16 = (unsigned short)25280;
unsigned short var_17 = (unsigned short)928;
signed char var_18 = (signed char)-55;
unsigned short var_19 = (unsigned short)20497;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
