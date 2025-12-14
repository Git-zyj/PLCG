#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
unsigned char var_4 = (unsigned char)31;
short var_5 = (short)9964;
unsigned char var_8 = (unsigned char)1;
unsigned short var_10 = (unsigned short)42112;
unsigned long long int var_12 = 3802209792811715427ULL;
signed char var_13 = (signed char)-52;
signed char var_15 = (signed char)69;
int var_18 = 563052473;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
int var_21 = -927301473;
int var_22 = -294371452;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
