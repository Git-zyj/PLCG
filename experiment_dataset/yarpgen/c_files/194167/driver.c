#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = -1634152376;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)99;
unsigned char var_13 = (unsigned char)100;
unsigned long long int var_14 = 11559649806508678536ULL;
int zero = 0;
unsigned int var_16 = 4111076445U;
long long int var_17 = 8241972267610946793LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
