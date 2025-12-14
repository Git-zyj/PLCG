#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -299117894584592686LL;
int var_1 = -2097022622;
unsigned char var_5 = (unsigned char)78;
unsigned char var_9 = (unsigned char)191;
unsigned long long int var_14 = 16801551789359801367ULL;
unsigned short var_15 = (unsigned short)49086;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)158;
unsigned short var_19 = (unsigned short)12338;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
