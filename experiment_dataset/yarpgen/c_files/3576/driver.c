#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3904337904U;
unsigned short var_3 = (unsigned short)56417;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8885690876381454989ULL;
int zero = 0;
unsigned int var_10 = 1851255509U;
unsigned char var_11 = (unsigned char)237;
signed char var_12 = (signed char)-51;
signed char var_13 = (signed char)-90;
unsigned short var_14 = (unsigned short)45243;
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
