#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2647351656757897069LL;
_Bool var_8 = (_Bool)1;
int var_10 = -381400316;
int zero = 0;
unsigned long long int var_11 = 12931259111065241020ULL;
long long int var_12 = 5018531971605906367LL;
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
