#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4109330211U;
unsigned char var_2 = (unsigned char)191;
unsigned long long int var_3 = 18292998413336848034ULL;
unsigned char var_5 = (unsigned char)216;
int var_7 = 275526175;
signed char var_13 = (signed char)-126;
signed char var_14 = (signed char)105;
int zero = 0;
signed char var_16 = (signed char)61;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
