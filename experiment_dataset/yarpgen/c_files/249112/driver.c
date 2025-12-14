#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1845719572101080882ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 2723986030879645410ULL;
signed char var_10 = (signed char)18;
short var_11 = (short)-11448;
int var_13 = -263239704;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
signed char var_18 = (signed char)-11;
unsigned int var_19 = 3723828483U;
void init() {
}

void checksum() {
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
