#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)125;
unsigned short var_4 = (unsigned short)64251;
unsigned int var_5 = 1182766378U;
unsigned int var_8 = 3346501005U;
unsigned int var_9 = 119239840U;
signed char var_11 = (signed char)10;
unsigned int var_13 = 2681857195U;
int zero = 0;
signed char var_15 = (signed char)79;
unsigned short var_16 = (unsigned short)12139;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
