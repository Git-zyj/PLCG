#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned short var_4 = (unsigned short)1507;
signed char var_6 = (signed char)-90;
int zero = 0;
unsigned short var_10 = (unsigned short)35414;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3870330898U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
