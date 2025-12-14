#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
signed char var_3 = (signed char)-91;
unsigned int var_4 = 3892618392U;
unsigned int var_7 = 2343249315U;
signed char var_8 = (signed char)43;
int var_12 = -1745121164;
int zero = 0;
long long int var_13 = -3112332866097034174LL;
unsigned int var_14 = 1218056834U;
unsigned int var_15 = 4191167567U;
unsigned int var_16 = 579153988U;
void init() {
}

void checksum() {
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
