#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25846;
short var_1 = (short)634;
unsigned int var_2 = 2212243663U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)25;
_Bool var_8 = (_Bool)1;
int var_10 = -905739612;
unsigned long long int var_11 = 9921352916014461542ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)15334;
short var_13 = (short)-10952;
unsigned int var_14 = 3870743349U;
void init() {
}

void checksum() {
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
