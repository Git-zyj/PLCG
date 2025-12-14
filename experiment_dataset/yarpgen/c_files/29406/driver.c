#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
unsigned char var_1 = (unsigned char)67;
signed char var_2 = (signed char)44;
unsigned int var_3 = 3179510073U;
unsigned int var_4 = 3339837372U;
unsigned int var_5 = 945347801U;
unsigned long long int var_6 = 710648882643820149ULL;
unsigned char var_8 = (unsigned char)172;
int zero = 0;
short var_10 = (short)22177;
unsigned long long int var_11 = 14346270473248898008ULL;
short var_12 = (short)-10955;
unsigned short var_13 = (unsigned short)24467;
unsigned char var_14 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
