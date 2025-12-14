#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4135632964U;
long long int var_4 = -6394467053293827929LL;
signed char var_10 = (signed char)15;
short var_12 = (short)10626;
unsigned long long int var_17 = 4088016185202824059ULL;
int zero = 0;
int var_19 = 1541742641;
unsigned long long int var_20 = 6624931885933690078ULL;
long long int var_21 = -5166753605899918158LL;
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
