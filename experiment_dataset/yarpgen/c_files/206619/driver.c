#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18073;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)178;
int var_5 = 741123144;
unsigned char var_6 = (unsigned char)145;
unsigned long long int var_7 = 15330953812518326662ULL;
unsigned char var_8 = (unsigned char)95;
int zero = 0;
int var_11 = 1548787430;
int var_12 = -2064582887;
void init() {
}

void checksum() {
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
