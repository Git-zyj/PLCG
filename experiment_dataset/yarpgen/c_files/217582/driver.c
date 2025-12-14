#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 980845687U;
signed char var_4 = (signed char)-96;
unsigned char var_5 = (unsigned char)132;
_Bool var_6 = (_Bool)0;
int var_8 = 1947874137;
int var_9 = -1652615206;
int var_11 = -1692364796;
unsigned int var_13 = 2574877645U;
signed char var_14 = (signed char)0;
int zero = 0;
long long int var_17 = 8374207401187823532LL;
unsigned short var_18 = (unsigned short)23041;
unsigned long long int var_19 = 15223156536757752972ULL;
void init() {
}

void checksum() {
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
