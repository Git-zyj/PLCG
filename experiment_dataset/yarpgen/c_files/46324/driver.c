#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1208016000;
unsigned int var_8 = 4091276040U;
short var_9 = (short)-9278;
unsigned char var_13 = (unsigned char)248;
short var_16 = (short)9256;
int zero = 0;
unsigned long long int var_19 = 709627911878918884ULL;
short var_20 = (short)15502;
unsigned long long int var_21 = 14902512431752878086ULL;
unsigned long long int var_22 = 2713882367287764371ULL;
long long int var_23 = 3586697555868722670LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
