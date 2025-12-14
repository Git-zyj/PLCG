#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7611198625039367313ULL;
unsigned int var_2 = 2917603676U;
unsigned int var_4 = 617135147U;
unsigned int var_7 = 3274194240U;
unsigned short var_8 = (unsigned short)60209;
signed char var_12 = (signed char)-5;
int zero = 0;
unsigned short var_16 = (unsigned short)24036;
unsigned char var_17 = (unsigned char)188;
short var_18 = (short)4631;
unsigned int var_19 = 2809784433U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
