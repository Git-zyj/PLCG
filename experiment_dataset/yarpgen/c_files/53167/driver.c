#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)40;
unsigned short var_11 = (unsigned short)4185;
unsigned char var_13 = (unsigned char)93;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-61;
unsigned int var_20 = 4271040448U;
void init() {
}

void checksum() {
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
