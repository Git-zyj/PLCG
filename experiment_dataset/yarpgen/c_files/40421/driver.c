#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 459489536476137307ULL;
unsigned int var_7 = 610570361U;
unsigned char var_16 = (unsigned char)149;
int zero = 0;
long long int var_18 = -2299328625239374544LL;
unsigned char var_19 = (unsigned char)142;
unsigned char var_20 = (unsigned char)234;
_Bool var_21 = (_Bool)1;
int var_22 = 1802212662;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
