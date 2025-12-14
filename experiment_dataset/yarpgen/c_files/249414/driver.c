#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42820;
unsigned int var_2 = 3709267963U;
short var_7 = (short)-7581;
short var_9 = (short)-27294;
unsigned short var_13 = (unsigned short)34060;
unsigned int var_16 = 1564908130U;
int zero = 0;
unsigned short var_19 = (unsigned short)5255;
unsigned int var_20 = 2326908673U;
unsigned int var_21 = 1355945331U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
