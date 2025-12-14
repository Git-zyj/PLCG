#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65114;
unsigned int var_5 = 2741402416U;
short var_8 = (short)-2869;
short var_9 = (short)1564;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)61;
unsigned long long int var_14 = 6577999540897256696ULL;
signed char var_16 = (signed char)10;
int zero = 0;
unsigned char var_18 = (unsigned char)3;
unsigned int var_19 = 291304498U;
unsigned int var_20 = 4280439537U;
unsigned char var_21 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
