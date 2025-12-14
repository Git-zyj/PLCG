#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3365340080U;
unsigned short var_1 = (unsigned short)38362;
signed char var_2 = (signed char)-74;
short var_4 = (short)-4296;
unsigned long long int var_5 = 16380861418380007842ULL;
unsigned int var_7 = 511520995U;
unsigned long long int var_9 = 1517066752159139481ULL;
signed char var_11 = (signed char)61;
int zero = 0;
unsigned char var_12 = (unsigned char)221;
short var_13 = (short)6326;
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
