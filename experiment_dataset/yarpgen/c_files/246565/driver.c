#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25996;
unsigned short var_6 = (unsigned short)4439;
signed char var_12 = (signed char)84;
unsigned char var_13 = (unsigned char)24;
unsigned long long int var_16 = 15257647721461080229ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)151;
int var_18 = -344200732;
unsigned short var_19 = (unsigned short)11156;
long long int var_20 = -2100795978387290274LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
