#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -482281020525647292LL;
unsigned short var_5 = (unsigned short)8087;
int var_7 = 1134145483;
short var_8 = (short)-5094;
int zero = 0;
signed char var_10 = (signed char)-55;
unsigned char var_11 = (unsigned char)113;
_Bool var_12 = (_Bool)1;
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
