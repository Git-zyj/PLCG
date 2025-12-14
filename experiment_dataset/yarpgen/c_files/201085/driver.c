#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4310975475879742152ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)23339;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-63;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1709163354U;
unsigned char var_13 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
