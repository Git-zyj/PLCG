#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16093697625416018501ULL;
unsigned long long int var_1 = 16495991569864071529ULL;
unsigned char var_2 = (unsigned char)134;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)64;
unsigned int var_7 = 3010578320U;
int var_8 = -2051024294;
int zero = 0;
signed char var_11 = (signed char)-127;
long long int var_12 = 8195027329045324934LL;
unsigned char var_13 = (unsigned char)125;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-6761;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
