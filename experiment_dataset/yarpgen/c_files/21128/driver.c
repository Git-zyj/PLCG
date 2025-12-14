#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6244;
unsigned int var_5 = 2734578024U;
unsigned long long int var_6 = 15565073241790378498ULL;
unsigned int var_13 = 991558163U;
int zero = 0;
unsigned char var_15 = (unsigned char)234;
unsigned long long int var_16 = 6744591058748778607ULL;
long long int var_17 = -5791193845122452298LL;
signed char var_18 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
