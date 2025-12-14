#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 877342321013186590LL;
unsigned char var_4 = (unsigned char)97;
unsigned short var_5 = (unsigned short)6299;
int zero = 0;
signed char var_11 = (signed char)99;
signed char var_12 = (signed char)114;
unsigned char var_13 = (unsigned char)92;
unsigned short var_14 = (unsigned short)54325;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
