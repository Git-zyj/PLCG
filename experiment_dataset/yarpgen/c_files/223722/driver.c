#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -65718710;
unsigned int var_4 = 2600704117U;
unsigned char var_7 = (unsigned char)44;
unsigned int var_8 = 4134168827U;
unsigned char var_18 = (unsigned char)208;
int zero = 0;
signed char var_19 = (signed char)-49;
unsigned int var_20 = 2626174413U;
void init() {
}

void checksum() {
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
