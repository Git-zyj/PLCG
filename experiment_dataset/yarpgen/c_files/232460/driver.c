#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1894024311190726333ULL;
unsigned int var_7 = 1368441365U;
unsigned int var_8 = 3323155022U;
_Bool var_13 = (_Bool)0;
signed char var_17 = (signed char)76;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2007213442U;
unsigned int var_20 = 2019041275U;
unsigned char var_21 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
