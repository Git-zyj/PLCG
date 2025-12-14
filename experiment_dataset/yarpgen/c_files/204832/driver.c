#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6198634286093824609LL;
short var_9 = (short)-27016;
signed char var_10 = (signed char)65;
unsigned int var_11 = 2891949573U;
unsigned char var_15 = (unsigned char)78;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2385238856840108467LL;
unsigned short var_22 = (unsigned short)4475;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
