#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned short var_1 = (unsigned short)61291;
signed char var_4 = (signed char)-27;
unsigned int var_6 = 119785345U;
long long int var_7 = 2007492056974605399LL;
unsigned long long int var_8 = 845499998459231636ULL;
short var_10 = (short)6217;
signed char var_11 = (signed char)-98;
int zero = 0;
signed char var_12 = (signed char)95;
int var_13 = -1884339805;
unsigned int var_14 = 396994290U;
unsigned short var_15 = (unsigned short)33892;
long long int var_16 = -6095890386679539186LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
