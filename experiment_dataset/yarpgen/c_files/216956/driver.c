#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40575;
long long int var_6 = -5942920544793837538LL;
int var_8 = 932680151;
signed char var_10 = (signed char)10;
short var_11 = (short)7256;
int var_12 = -1895554297;
int var_14 = -1203588754;
int zero = 0;
long long int var_16 = 2993174700851606459LL;
unsigned int var_17 = 146085939U;
void init() {
}

void checksum() {
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
