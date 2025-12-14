#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1296;
unsigned long long int var_5 = 14232832290341942922ULL;
short var_8 = (short)26944;
_Bool var_12 = (_Bool)1;
long long int var_14 = 1668443053251758782LL;
unsigned short var_15 = (unsigned short)55652;
int zero = 0;
unsigned char var_20 = (unsigned char)6;
unsigned short var_21 = (unsigned short)11824;
signed char var_22 = (signed char)-78;
unsigned char var_23 = (unsigned char)89;
unsigned short var_24 = (unsigned short)21497;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
