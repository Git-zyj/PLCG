#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18544;
unsigned int var_5 = 3511491119U;
unsigned int var_7 = 1976997542U;
signed char var_11 = (signed char)-69;
unsigned char var_13 = (unsigned char)15;
signed char var_14 = (signed char)117;
int zero = 0;
long long int var_15 = -583888007818014714LL;
signed char var_16 = (signed char)-76;
signed char var_17 = (signed char)91;
signed char var_18 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
