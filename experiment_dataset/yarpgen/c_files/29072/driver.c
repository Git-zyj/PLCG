#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2312431765U;
signed char var_1 = (signed char)25;
unsigned int var_3 = 2575412978U;
long long int var_4 = -4063721881285612754LL;
signed char var_6 = (signed char)-53;
long long int var_7 = -7136837558989887830LL;
unsigned int var_8 = 2738155743U;
int zero = 0;
long long int var_10 = 8411867804452457503LL;
long long int var_11 = -7064137817184689219LL;
signed char var_12 = (signed char)-97;
long long int var_13 = -950843338375837778LL;
unsigned char var_14 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
