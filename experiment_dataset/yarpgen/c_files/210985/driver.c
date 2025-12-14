#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3479116542U;
int var_3 = 1722331384;
signed char var_4 = (signed char)-93;
short var_8 = (short)31444;
long long int var_10 = 3998034480433636798LL;
unsigned int var_11 = 2880651448U;
short var_15 = (short)-28620;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned long long int var_17 = 18311142697068627589ULL;
unsigned int var_18 = 3681428122U;
unsigned char var_19 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
