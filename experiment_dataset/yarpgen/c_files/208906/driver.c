#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 36537871;
unsigned char var_7 = (unsigned char)254;
unsigned long long int var_8 = 14114372896780378186ULL;
int zero = 0;
unsigned int var_12 = 3307256158U;
unsigned int var_13 = 1402055795U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8780493969178189147LL;
signed char var_16 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
