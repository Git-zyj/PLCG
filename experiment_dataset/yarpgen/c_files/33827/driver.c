#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7565012467906564401ULL;
unsigned long long int var_7 = 5555028984712087098ULL;
unsigned long long int var_8 = 14976767808956812865ULL;
signed char var_13 = (signed char)1;
int zero = 0;
unsigned long long int var_18 = 308129846430903269ULL;
unsigned short var_19 = (unsigned short)41454;
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
