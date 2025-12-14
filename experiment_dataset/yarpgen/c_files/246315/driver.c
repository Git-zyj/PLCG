#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11236934577012966306ULL;
long long int var_3 = 7549685189648030857LL;
_Bool var_4 = (_Bool)0;
unsigned char var_11 = (unsigned char)191;
unsigned int var_12 = 1563809057U;
unsigned long long int var_14 = 15409408449106642177ULL;
int zero = 0;
long long int var_19 = 5806669597842035176LL;
unsigned int var_20 = 3110635284U;
short var_21 = (short)-28992;
void init() {
}

void checksum() {
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
