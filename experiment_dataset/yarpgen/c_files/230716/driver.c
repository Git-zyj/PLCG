#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
unsigned int var_3 = 1013863519U;
int var_4 = -669828304;
unsigned int var_8 = 3679878475U;
long long int var_9 = 4233049829411251073LL;
signed char var_11 = (signed char)-55;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3356158635U;
int var_15 = 1498237396;
unsigned short var_16 = (unsigned short)24222;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
