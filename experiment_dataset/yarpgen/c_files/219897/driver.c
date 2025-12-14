#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
signed char var_3 = (signed char)-78;
unsigned char var_5 = (unsigned char)205;
_Bool var_8 = (_Bool)1;
long long int var_10 = -5045692843896949567LL;
int zero = 0;
unsigned int var_14 = 3787357614U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)81;
void init() {
}

void checksum() {
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
