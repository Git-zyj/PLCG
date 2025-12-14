#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11797433157206460515ULL;
short var_4 = (short)22058;
signed char var_5 = (signed char)-64;
signed char var_6 = (signed char)3;
signed char var_8 = (signed char)-21;
unsigned short var_11 = (unsigned short)59665;
int zero = 0;
short var_12 = (short)4280;
unsigned short var_13 = (unsigned short)16959;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
