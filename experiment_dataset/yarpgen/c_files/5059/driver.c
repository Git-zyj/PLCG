#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1287385469U;
signed char var_2 = (signed char)-25;
int var_5 = -142694795;
unsigned int var_6 = 869284268U;
unsigned short var_8 = (unsigned short)3329;
unsigned long long int var_9 = 9412690946187342654ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)24147;
unsigned short var_13 = (unsigned short)65042;
unsigned char var_14 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
