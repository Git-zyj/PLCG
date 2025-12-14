#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13299585036789051804ULL;
unsigned int var_1 = 97359773U;
short var_4 = (short)-1793;
int var_6 = 18676621;
signed char var_7 = (signed char)-29;
signed char var_8 = (signed char)63;
signed char var_10 = (signed char)71;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 18386862055778357556ULL;
int zero = 0;
signed char var_13 = (signed char)46;
signed char var_14 = (signed char)43;
int var_15 = -798420898;
signed char var_16 = (signed char)17;
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
