#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
long long int var_2 = -6330539171352656758LL;
unsigned char var_5 = (unsigned char)0;
_Bool var_8 = (_Bool)0;
long long int var_12 = -8890233320700097005LL;
unsigned char var_17 = (unsigned char)45;
int zero = 0;
signed char var_20 = (signed char)75;
signed char var_21 = (signed char)30;
int var_22 = 1162855748;
unsigned char var_23 = (unsigned char)106;
signed char var_24 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
