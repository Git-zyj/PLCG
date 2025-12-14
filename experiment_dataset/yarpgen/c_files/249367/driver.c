#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -563600412;
unsigned char var_3 = (unsigned char)14;
unsigned int var_4 = 3384315410U;
unsigned char var_7 = (unsigned char)30;
int zero = 0;
signed char var_14 = (signed char)-33;
unsigned long long int var_15 = 3586282261634592243ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
