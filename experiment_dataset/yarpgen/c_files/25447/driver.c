#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5357816152348903733LL;
unsigned char var_5 = (unsigned char)190;
int var_6 = 1300041070;
int var_8 = -1749529606;
int var_9 = 300890976;
unsigned short var_10 = (unsigned short)20757;
int zero = 0;
long long int var_12 = 1617164868196240587LL;
unsigned short var_13 = (unsigned short)12761;
unsigned char var_14 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
