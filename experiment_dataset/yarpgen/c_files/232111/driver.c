#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)189;
unsigned short var_12 = (unsigned short)63097;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 3111144912711221593ULL;
unsigned short var_19 = (unsigned short)35376;
unsigned int var_20 = 2790077483U;
signed char var_21 = (signed char)-37;
unsigned long long int var_22 = 5834466402011621396ULL;
unsigned int var_23 = 2275786218U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
