#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned int var_4 = 3711757398U;
signed char var_6 = (signed char)6;
_Bool var_7 = (_Bool)1;
short var_8 = (short)22666;
int zero = 0;
unsigned long long int var_10 = 12868228478980154914ULL;
unsigned int var_11 = 3488887043U;
unsigned long long int var_12 = 5054853774866641481ULL;
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
