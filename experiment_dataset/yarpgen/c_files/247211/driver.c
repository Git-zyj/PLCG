#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9660629675581828998ULL;
signed char var_1 = (signed char)-105;
short var_3 = (short)7150;
signed char var_6 = (signed char)85;
signed char var_7 = (signed char)-53;
int zero = 0;
unsigned short var_12 = (unsigned short)50185;
int var_13 = 947178721;
int var_14 = 1100871373;
unsigned int var_15 = 2283281407U;
unsigned long long int var_16 = 2224541226500712110ULL;
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
