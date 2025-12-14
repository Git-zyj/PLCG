#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_8 = 4976396816680931445LL;
unsigned long long int var_13 = 4130961701102992516ULL;
int zero = 0;
long long int var_19 = -2854285719781473061LL;
unsigned char var_20 = (unsigned char)225;
unsigned char var_21 = (unsigned char)5;
unsigned char var_22 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
