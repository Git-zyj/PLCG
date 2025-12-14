#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
unsigned int var_3 = 2445144696U;
signed char var_6 = (signed char)-48;
unsigned short var_8 = (unsigned short)46901;
int var_10 = 416322396;
long long int var_11 = -5235878297598708853LL;
int zero = 0;
int var_12 = -1170337686;
unsigned int var_13 = 3573615574U;
signed char var_14 = (signed char)97;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
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
