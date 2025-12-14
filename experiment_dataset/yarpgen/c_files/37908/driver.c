#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-37;
signed char var_6 = (signed char)99;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)17;
unsigned char var_9 = (unsigned char)239;
unsigned char var_10 = (unsigned char)89;
unsigned int var_12 = 3893456519U;
unsigned int var_14 = 683406446U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
