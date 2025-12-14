#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9688299589214141030ULL;
long long int var_3 = -6974476605121657570LL;
unsigned int var_4 = 1487836318U;
int var_6 = -351744712;
long long int var_7 = 8865171198576286518LL;
signed char var_11 = (signed char)-121;
unsigned int var_12 = 3012551994U;
signed char var_13 = (signed char)-114;
int zero = 0;
signed char var_14 = (signed char)42;
unsigned long long int var_15 = 14572975004977437014ULL;
unsigned int var_16 = 2711955652U;
long long int var_17 = 5653757467305266439LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
