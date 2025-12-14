#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
signed char var_1 = (signed char)-42;
unsigned char var_6 = (unsigned char)46;
signed char var_8 = (signed char)-96;
unsigned int var_9 = 806836022U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6912079180323631731ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)-1222;
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
